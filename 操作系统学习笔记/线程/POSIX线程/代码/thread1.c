#include <stdlib.h>
#include <pthread.h>
#include <stdio.h>
#include <string.h>
// 演示线程并发的例子
// 2个线程对1+....+N求和 
// 第一个线程计算1+....+N/2 得到sum
// 第二个线程技术N/2+....+N 得到sum
// 在给value+sum时加锁，保证只有一个线程可以加sum
const int N = 1e4;
int value = 0;
pthread_mutex_t mutex;
void *worker1(void *arg)
{
    int i = 1;
    int sum = 0;
    for (; i <= N / 2; i++) sum += i;
    // 这样保证 value 仅能由一个线程访问
    pthread_mutex_lock(&mutex);
    value += sum;
    pthread_mutex_unlock(&mutex);
    return NULL;
};
void *worker2(void *arg)
{
    int i = N / 2 + 1;
    int sum = 0;
    for (; i <= N; i++) sum += i;
    pthread_mutex_lock(&mutex);
    value += sum;
    pthread_mutex_unlock(&mutex);
    return NULL;
}
int main()
{
    pthread_t tid1, tid2;
    pthread_mutex_init(&mutex, NULL);
    pthread_create(&tid1, NULL, worker1, NULL);
    pthread_create(&tid2, NULL, worker2, NULL);
    pthread_join(tid1, NULL);
    pthread_join(tid2, NULL);
    printf("%d\n", value);
    printf("SUM(1, %d) should be %d .\n", N, N * (N + 1) / 2);
    pthread_mutex_destroy(&mutex);
}
