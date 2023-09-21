### FLOPS-a measure of a computer's performance
### How to calculate CPU Peak FLOPS(floating point operations per second 浮点数计算，而不是单指float数据类型)
* 浮点数
    * float 浮点数
    * double浮点数


* State-of-the-art CPU 最先进的CPU
    * Multi-core 多核
    * Multi issue 多发射
    * SIMD(Multiply-add instruction)
    * Frequency(Ghz)

### if it has Multiply-add instruction 
* FLOPS = 2 * of elements per simd multiply-add instruction *  of SIMD issued per cycle * Frequency(GHZ) * cores

### take case of Intel Xeon Gold 6248R
* Frequency: 3GHZ
* SIMD instruction : 512-bit multiply-add SIMD
* Multi issue: 2 multiply-add SIMD per cycle
* 24 cores, 48 hyper-threads

### Calculate double FLOPS single core
* 512 bits/64bits(double) = 8 elements
* FLOPS(single core) = 2 * 8 * 2 * 3 GB = 96GFlops
* FLOPS(total/multi-core) = 96 * 24 = 2.304TFlops(don't not use hyper-threading)



### OpenBLAS Matrix Multiplication
* Matrix blocking to improve locality
* Data packing to improve locality
* Kernel in assembly,SIMD instruction
* Multi-thread for multi-core

### Performance Evaluation of Matrix Multiplication
* Timing：Linux上通过Gettimeofday()获得wall-time.
* Calculate effected floating op 计算有效的浮点计算操作数
    * Matrix A=m x k, Matrix B=k * n, Matrix C = m*n
    * Effected floating op = 2* m * n * k

### Performance Evaluation
* Effected Performance = Calculate effected floating op/time
* Efficiency = Effected Performance / Peak Performance
* The GEMM efficiency of Intel CPU single core is usually above 90%
