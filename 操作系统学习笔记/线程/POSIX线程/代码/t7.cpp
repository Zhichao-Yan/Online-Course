#include <iostream>
#include <pthread.h>
#include <cstring>
using namespace std;


void* Func(void* arg)
{
    cout << "线程运行" << endl;
    pthread_exit((void*)"good afternoon!Mr.Yan");
}

int main()
{
    pthread_t t;
    int ret = pthread_create(&t,nullptr,Func,nullptr);
    if(ret != 0)
    {
        exit(-1);
    }
    void *res;
    ret = pthread_join(t,&res);
    if(ret != 0)
    {
        exit(-1);
    }
    cout << (char*)res << endl;
    pthread_exit(nullptr);
}