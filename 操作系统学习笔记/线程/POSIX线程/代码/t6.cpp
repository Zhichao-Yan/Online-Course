#include <iostream>
#include <pthread.h>
#include <cstring>
using namespace std;


void* Func(void* arg)
{
    char * s = (char*)arg;
    cout << s << endl;
    return (void*)strlen(s);
}

int main()
{
    pthread_t t;
    int ret = pthread_create(&t,nullptr,Func,(void*)"hello world!zhichao\n");
    if(ret != 0)
    {
        exit(-1);
    }
    void *res;
    cout << "Monday!!" << endl;
    ret = pthread_join(t,&res);
    if(ret != 0)
    {
        exit(-1);
    }
    cout << "thread return size of string:" << (long)res;
    pthread_exit(nullptr);
}