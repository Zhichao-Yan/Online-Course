## 线程开始方法
`int pthread_create(pthread_t *thread, const pthread_attr_t *attr, void *(*start)(void *), void *arg)`
* `pthread_t *thread`线程表示符
    * pthread_create()返回前，会在此保存一个该线程的唯一标识。
    * 后续的 Pthreads 函数将使用该标识来引用此线程
* `const pthread_attr_t *attr`线程属性
    * 用于设置线程属性
    * 设置为nullptr将使用线程的默认属性
* `void *(*start)(void *)`线程执行函数
    * 函数返回值必须为void*
    * 函数参数类型为void*
* `void *arg`线程执行函数的参数,传递的指针必须被强制转换成void*类型
    * 一般情况下，arg指向一个全局或堆变量
    * 也可将其置为nullptr
    * [如果需要传递多个参数，可以定义数据结构struct包含各种参数成员](../代码/t5.cpp)
    * 直接传int也是可以的`int j == (int) ((void*) j)`

## 获取线程id
* `pthread_t pthread_self(void)` 获取线程id
* `int pthread_euqal(pthread_t t1,pthread_t t2)` 判断2个线程id是否相同

## 线程结束方法：
* 单个线程结束
    1. 函数体运行完自动结束return，会隐式调用pthread_exit()
    2. 被同进程其他线程强制结束pthread_cancel()取消线程
    3. 线程执行过程中，遇到pthread_exit() 函数结束执行
* 所有线程结束
    * 任意线程调用exit()，所有线程强制结束
    * 主线程main函数return结束，所有线程强制结束

* pthread_exit()函数`void pthread_exit(void *retval);` 用于显式退出一个线程
    * 场景
        * 如果是main所在的主线程:
            * 调用pthread_exit()时，其他线程会继续运行。
            * 不调用pthread_exit()直接return，那么会创建的子线程会立即结束，[不会执行完成](../代码/t3.cpp)
        * [如果是在单独的线程，会直接结束线程。](../代码/t2.cpp)
        * [如果是子线程A再创建子线程B的情况，无论是否显式调用pthread_exit，子线程A都会等待它的子线程B结束再结束](../代码/t4.cpp)
    * 没有返回值
    * 返回值通过参数指针void *retval返回
    * 实参指针必须指向全局变量，而非函数内的局部变量，否则程序奔溃
    * 不需要返回值可以设置为实参为nullptr

* pthread_join(pthread_t thread,void **retval):等待有pthread_t 标记的线程结束，如果线程已经结束，则立即返回
    * 参数
        * pthread_t thread 等待结束的线程
        * void **retval：
            * [线程调用return](../代码/t6.cpp)
            * [pthred_exit()时所指定的值](../代码/t7.cpp)
    * 如向 pthread_join()传入一个之前已然连接过的线程 ID，将会导致无法预知的行为
    * 默认情况下，线程被创建时是可分离的，线程退出可以通过pthread_join返回它的状态

*  pthread_detach()：控制线程终止之后所发生的事情，而非何时或如何终止线程
    * 程序员并不关心线程的返回状态，只是希望系统在线程终止时能够自动清理并移除之
    * 一旦线程处于分离状态，就不能再使用 pthread_join()来获取其状态，也无法使其重返“可 连接”状态。
