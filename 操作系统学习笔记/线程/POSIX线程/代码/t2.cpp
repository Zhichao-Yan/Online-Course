#include <iostream>
#include <pthread.h>
#define NUMS_THREADS 5
using namespace std;


void* print_hello(void* tid)
{
    int i = *((int*)tid);
    cout << "线程id:" << i << endl;
    pthread_exit(nullptr);
    cout << "thread is still running" << endl;// 线程已经结束，没有后续，不会被打印出来
}

int main()
{
    pthread_t id[NUMS_THREADS];
    int tid[NUMS_THREADS];
    for(int i = 0; i < NUMS_THREADS; ++i)
    {
        tid[i] = i;
        cout << "create thread:" << i << endl;
        int ret = pthread_create(&id[i],nullptr,print_hello,(void*)(&tid[i]));
        if(ret != 0)
        {
            cout << " pthread_create error: error_code= " << ret << endl;
            exit(-1);
        }
    }
    pthread_exit(nullptr);
}