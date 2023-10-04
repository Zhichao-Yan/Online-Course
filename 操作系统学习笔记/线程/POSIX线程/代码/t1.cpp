#include <iostream>
#include <pthread.h>
#define NUMS_THREADS 5
using namespace std;

// first simple demo
void* say_hello(void*)
{
    cout << "hello!threads!" << endl;
    return nullptr;
}

int main()
{
    pthread_t id[NUMS_THREADS];
    for(int i = 0; i < NUMS_THREADS; ++i)
    {
        int ret = pthread_create(&id[i],nullptr,say_hello,nullptr);
        if(ret != 0)
        {
            cout << " pthread_create error: error_code= " << ret << endl;
        }
    }
    pthread_exit(nullptr);
}