ARM产品增长的背景
: 1. 手机平板的使用，个人电脑市场不再增长，甚至萎缩。英特尔在多年前占主导业务的市场
: 2. 服务器市场有所增长，英特尔芯片速度快，但是能耗高，不适合服务器市场。


RISA
: Reduced Instruction Set Computing

ARM
: most widely used ISA (Instruction Set Achitecture)-An acronym for Advanced RISA Machine


 > Develop programs with ARM is sanme with X86 PC and Linux OS 

----
 ### Speed up your progran

 * Principle for programming
    * Short
    * Simple
    * Efficient

* Some tips on Optimization
    * Choose an appropriate algorithm
        * 选好的算法，避免高复杂度算法
    * Clear and simple code for the 
    compiler to optimize
        * 代码简洁，在编译器看来符合编译器的优化策略。
    * Optimize code for memory
        * 考虑内存：很多时候速度瓶颈不是CPU不够快，是内存IO读写不够快。内存读写要具有连续性而非跳跃式。
    * Do not copy large memory
        * 避免内存拷贝耗费时间
    * No printf/Cout in loops
        * 打印输出需要中断等阻断程序
    * Table lookup (sin()/cos())
        * sin三角函数计算比较慢
        * 可以先行计算sin后再查表
        * 但是会损失精度
    * SIMD,OpenMP
-----
SIMD
: Single instruction,Multiple Data

* Intel:MMX/AVX2/AVXAVX512
* ARM:NEON
* RISC-V:RVV


OpenMP
: 利用多核多线程加速计算
* 数据的分拆需要消耗计算性能，需综合考虑是否划算
* 因为是多线程，考虑好数据读取的互斥性
```C++
#include <omp.h>

#pragma omp parallel for
for (size_t i = 0; i < n; i++)
{
   c[i] = a[i] + b[i];
}
```