#include <iostream>
#include <pthread.h>
#include <string>
#include <unistd.h>

using namespace std;

struct thread_arg{
    int id;
    string msg;
};

void* print_hello(void* args)
{
    thread_arg *data = (thread_arg *)(args);
    cout << data->id << '!' << data->msg << endl;
    pthread_exit(nullptr);
}

int main()
{
    pthread_t id;
    thread_arg args;
    args.id  = 16015134;
    args.msg = "nice to see you!";
    cout << "creat thread" << endl;
    int ret = pthread_create(&id,nullptr,print_hello,(void*)(&args));
    if(ret != 0)
    {
        cout << " pthread_create error: error_code= " << ret << endl;
        exit(-1);
    }
    pthread_exit(nullptr);
}