#include <pthread.h>
#include <stdio.h>
// const int CAPACITY = 4;
#define CAPACITY 4
typedef struct
{
    char items[CAPACITY];
    int in, out;
} buffer_t;
// buffer_t *b is a cycled queue 循环队列
void buffer_init(buffer_t *b) // initialize the buffer
{ 
    b->in = b->out = 0; 
}
int buffer_is_full(buffer_t *b) // test if the queue is full
{ 
    return ((b->in + 1) % CAPACITY) == (b->out); 
}
int buffer_is_empty(buffer_t *b) // test if the buffer is empty
{ 
    return b->in == b->out; 
}
void buffer_put_item(buffer_t *buf, char item)
{
    buf->items[buf->in] = item; // put an item into queue
    buf->in = (buf->in + 1) % CAPACITY; // move the location of in 
}
char buffer_get_item(buffer_t *buf)
{
    char item = buf->items[buf->out];// take out the item from the queue at out location
    buf->out = (buf->out + 1) % CAPACITY;// out points to the next to be taken out
    return item;
}

const int N = 8;         // 依据题意，需要转换 8 个字符
buffer_t buf1, buf2;
pthread_mutex_t mutex1 = PTHREAD_MUTEX_INITIALIZER;  // mutex for buf1
pthread_mutex_t mutex2 = PTHREAD_MUTEX_INITIALIZER;  // mutex for buf2
pthread_cond_t empty1 = PTHREAD_COND_INITIALIZER; // mark whether the conditon of buffer_is_empty(&buf1) has changed
pthread_cond_t empty2 = PTHREAD_COND_INITIALIZER; // mark whether the conditon of buffer_is_empty(&buf2) has changed
pthread_cond_t full1 = PTHREAD_COND_INITIALIZER; // mark whether the condition of buffer_is_full(&full1) has changed
pthread_cond_t full2 = PTHREAD_COND_INITIALIZER; // mark whether the condition of buffer_is_full(&full2) has changed

void *producer(void *arg)
{
    int i = 0;
    // can be while(true)
    for (; i < N; i++)
    {
        pthread_mutex_lock(&mutex1);
        while (buffer_is_full(&buf1))
            pthread_cond_wait(&full1, &mutex1);
        buffer_put_item(&buf1, (char)('a' + i));
        printf("Producer put [%c] in buffer1. \n", (char)('a' + i));
        pthread_cond_signal(&empty1);
        pthread_mutex_unlock(&mutex1);
    }
    return NULL;
}

void *consumer(void *arg)
{
    int i = 0;
    for (; i < N; i++)
    {
        pthread_mutex_lock(&mutex2);
        while (buffer_is_empty(&buf2))
            pthread_cond_wait(&empty2, &mutex2);
        char item = buffer_get_item(&buf2);
        printf("\tConsumer get [%c] from buffer2. \n", item);
        pthread_cond_signal(&full2);
        pthread_mutex_unlock(&mutex2);
    }
    return NULL;
}


void *calculator(void *arg)
{
    int i = 0;
    char item;
    for (; i < N; i++)
    {
        pthread_mutex_lock(&mutex1);
        while (buffer_is_empty(&buf1))
            pthread_cond_wait(&empty1, &mutex1);
        item = buffer_get_item(&buf1);
        pthread_cond_signal(&full1);
        pthread_mutex_unlock(&mutex1);

        pthread_mutex_lock(&mutex2);
        while (buffer_is_full(&buf2))
            pthread_cond_wait(&full2, &mutex2);
        buffer_put_item(&buf2, item - 'a' + 'A');
        pthread_cond_signal(&empty2);
        pthread_mutex_unlock(&mutex2);
    }
    return NULL;
}
int main()
{
    pthread_t calc, prod, cons;
    // init buffer
    buffer_init(&buf1), buffer_init(&buf2);
	// create threads
    pthread_create(&calc, NULL, calculator, NULL);
    pthread_create(&prod, NULL, producer, NULL);
    pthread_create(&cons, NULL, consumer, NULL);
    pthread_join(calc, NULL);
    pthread_join(prod, NULL);
    pthread_join(cons, NULL);
    // destroy mutex
    pthread_mutex_destroy(&mutex1), pthread_mutex_destroy(&mutex2);
    // destroy cond
    pthread_cond_destroy(&empty1), pthread_cond_destroy(&empty2);
    pthread_cond_destroy(&full1), pthread_cond_destroy(&full2);
}
