#include <pthread.h>
#include <stdio.h>

#define N 4

char **ptr;
void* thread(void * arg)
{
    static int cnt = 0;
    int myid = (int)arg;
    printf("[%d]:[%s] (cnt = %d)\n",myid,ptr[myid],++cnt);
    return NULL;
}
int main()
{
    char* msg[N] = {
        "hello from A",
        "hello from B",
        "hello from C",
        "hello from D"
    };
    ptr = msg;
    pthread_t tid;
    int i;
    for(i = 0;i < N;++i)
    {
        pthread_create(&tid,NULL,thread,(void*)i);
    }
    pthread_exit(NULL);
}