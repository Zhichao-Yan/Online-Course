#include <iostream>
#include <pthread.h>
#include <unistd.h>
#define NUMS_THREADS 5
using namespace std;

void* print_bye(void*)
{
    cout << "good bye" << endl;
    sleep(4);
    return 0;
}

void* print_hello(void* tid)
{
    int i = *((int*)tid);
    pthread_t tt;
    int ret = pthread_create(&tt,nullptr,print_bye,nullptr);
    if(ret != 0)
    {
        cout << " pthread_create error: error_code= " << ret << endl;
        exit(-1);
    }
    cout << "From 线程id:" << i << endl;
    //pthread_exit(nullptr);
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