#include <iostream>
#include <pthread.h>
#include <cstdlib>
#include <unistd.h>
#define NUMS_THREADS 5
using namespace std;


void* print_hello(void* tid)
{
    int i = *((int*)tid);
    sleep(20); // 整个进程睡眠20秒
    cout << "线程id:" << i << endl;
    pthread_exit(nullptr);
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
    return 0;// 直接返回，线程没有打印线程id
}