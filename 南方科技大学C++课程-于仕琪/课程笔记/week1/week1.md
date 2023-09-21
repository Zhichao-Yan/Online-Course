* C++应用领域：基础的软件如Redis/Mysql/Mysql/Linux/Tensorflow和Pytorch的后端。
* C/C++长处
    * 高效率
        * 优化的编译器，编译出高效的代码
        * 可以直接访问内存：
            * 计算效率非常高
            * 人工智能算法需要巨大的计算量，因此需要C++实现。
        * 多线程支持
* C/C++缺点
    * 标准多，变化快，更新迭代多
    * 语法复杂
    * 内存管理困难
    * 指针的使用困难


* debug
    * 编译错误：语法错误
    `main.cpp:14:23: error: expected ';' after expression`
    * 链接错误：编译没有问题
    `ld: symbol(s) not found for architecture ×86 64`
    * 运行错误：编译成功，链接也成功，运行出错！
        * 逻辑错误：结果不对
        * 浮点数错误
        `floating point exception`
        * 段错误:访问内存错误
        `segmentation fault  ./a.out`


* GUI-Graphic User Interface
    * GUI是为了与人交互的，除了图形界面，人可以通过命令行与程序交互
    * 如果程序不需要与人交互，则不需要GUI。例如web后台程序/数据库服务程序
    * 创建窗口可以通过调用GUI库来实现。