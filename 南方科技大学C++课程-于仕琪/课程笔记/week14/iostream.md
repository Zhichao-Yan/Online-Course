* Command-line interface
> the only interface in the past
* but we still need it,because:
    1. Many computers don't need GUI: Server computer/router/watch
    2.  Many programs don't need GUI: HTTP Server/ DB server

* C language predefined text stream (FILE* )
    * stdin:standard input stream
    * stdout:standard output stream
    * stderr:standard error stream

* C language use of text stream(stdout/stdin/stderr can be substituted by FILE pointer)
    * `fprintf(stdout,"info:....");`
    * `fprintf(stderr,"error:....");`
* C++ language use of text stream
    * `std::cout << "info:...." << std::endl;`
    * `std::cerr << "error:...." << std::endl ;`


### 标准流
0. stdin-keyboard
1. stdout-screen
2. stderr-screen

* 管道命令|（将前一个操作的输出作为另一个命令的输入）
    * `./a.out|less`

* 输出重定向：标准输出流重定向
    * `./a.out > output.log`
    * `./a.out 1> output.log`
    * `./a.out >> output.log`（追加）

* 错误重定向：标准错误流重定向
    * `./a.out 2> error.log`
    * `./a.out 2>> error.log`（追加）

* 所有重定向：stdout&stderr都重定向到文件
    * `./a.out &> all.log`
    * `./a.out &>> all.log`（追加）

