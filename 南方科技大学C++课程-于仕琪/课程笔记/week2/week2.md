### 数据类型


###### 整数类型
-------
* int类型
    * 不同的整数类型
        * short
        * int
        * long
        * long long
    * 各整数类型占用内存空间在不同的数据模型不一样
        * short都是16位
        * int基本上是32位
        * long基本上是32位
        * long long全部是64位
    * 操作符sizeof：告诉当前系统数据类型的字节数，sizeof不是函数，而是操作符。
    > 函数参数必须是变量，而sizeof可以接受类型

* char类型
> 本质上char一个8位整数
* 特点
    * char可以是signed char或者unsigned char
    * 在不同平台上不一样，一些平台char默认是unsigned char
    * char如何编码？
        * 英文字符:8位够用
        * 中文字符：需要表示上千个汉子，8位不够表示
            * char16_t类型
            * char32_t类型


* bool类型
    * 在C++里面是一种数据类型，和int一样
    * 然而在C中，bool不是一种数据类型，通过宏定义实现的
        * 老版本C语言Bool实现
            * `typedef char bool`
            * `#define true 1`
            * `#define false 0`
        * C99标准
            * `#include <stdbool> `
    * 在C/C++中bool可以和int相互转化，然后在java中不可以相互转化
    * 理论上只需要1个bit可以存储bool类型，实际上来看计算机中使用字节作为最小存储单元。
    * 值为false（0）和true（1）
    * bool b2 = -256 类型转换，只要值不是0，那么b2为true，内存表示为1.
    * 把bool当成整数类型就好

* size_t：用于表示内存的字节大小个数或者元素个数 
    * 为什么有size_t?
        * int只有32位，即使是无符号，可以表示2^32个字节即4GB内存，但是实际计算机内存持续增长，int无法表示8GB了。
    * C和C++统一引进了size_t表示占用字节大小-专一用途，而不是选择long或者long long，虽然它们实际也可以这样使用。
    * size_t是一个无符号的整数
    * 可以存储理论上对象类型的最大内存大小
    * 有的系统是32位，有的系统是64位
    *  sizeof返回类型就是size_t类型 


* 这么多整数类型如何区分：
> `#include <cstdint>`
> 里面有宏`int8_MIN/int32_MAX`，其用来判断整数类型的数据范围。可以借以去做初步判断


###### 浮点数
---------
* 0-1之间有无限个实数
* 但是32位只能表示2^32个数字
> 所以：如果你想要1.2，它只能提供一个近似1.20000004，二进制对齐的结果。
* 浮点数总会带来些许的错误。
* 且无法被消除。
* 我们只能控制他们不造成问题。

* 单精度浮点数float占32bits
    * 符号位-1bit
    * 指数部-8bits
    * 小数部-23bits
* 双精度浮点数double占64bits
* long double：128bits/64bits

###### 浮点数和整数比较
----------
* 浮点数能表示整数之间的数字，可以表示小数。
* 浮点数运算比整数计算慢。对于老久arm，尽量用整数做计算。
* double计算比float慢。如果只是简单几个变量，使用float还是double影响不大，如果是大型矩阵计算，速度会差很多

* 浮点数注意点
    1. 因为浮点数采样精度原因，一个浮点数+比较小的数字，可能不会发生变化。见precision.cpp
    2. 不用==判断两个浮点数变量是否相等。浮点数采用近似的情况，本来两个数不相等，但是最后结果是相等。不推荐这种方法。
    3. ifn表示infinite，nan不是一个数：not a number.


###### 算术运算符
-------
1. constant number
integer
* 98 decimal十进制
* 0137 octal八进制，前面前缀0
* 0x5F hexadecimal 十六进制 前缀0x
* 95 //int
* 95u
* 95l
* 95ul
float number
* 3.1415926 //3.1415926
* 6.02e23 // 6.02x10^23
* 1.6e-19 // 1.6x10^-19
* 3.0 //3.0
* 6.02e23L // long double
* 6.02e23f // float

* const类型 const float PI = 3.141519
    * 可以替代宏定义
    * 不可以修改变量值
* auto:the type will be deduced from its initializer only for the first time
    * auto a = 2; // int
    * auto bc = 2.3 // double
    * auto c;// valid in C, cause error in C++
    * auto d = a * 1.2 // double
    ```C++
    auto a = 2;//type of a is int
    a = 2.3;// a is still a int,can't be changed since its first time
    // 2.3 will be converted to int 2,then assigned to a.
    ```
* arithmetic operators
    * +a
    * -a
    * a + b
    * a - b
    * a * b
    * a / b
    * a % b
    * ~a
    * a & b
    * a | b
    * a ^ b
    * a << b left shift
    * a >> b right shift
* Operator Precedence
    * a++
    * ++a
    * */
    * +-
    * << >>
* other operators
    * a = b
    * a += b
    * a -= b
    * a *= b
    * a /= b
    * a %= b
    * a |= b
    * a ^= b
    * a++
    * ++a
    * a--
    * --a

* operator precedence
    * same precedence 
        * Evaluated by Operator Associativity
            * Left-to-right associativity
            * Right-to-left associativity
    * different precedence 
        * Evalutaed by precedence

* Data type conversions
```C++
int num_int1 = 9; //assign an int value to num_int1
int num_int2 = 'C';//implicit conversion
int num_int3 = (int)'C';//explicit conversion, C-style
int num_int4 = int('C');//explicit conversion, function style
int num_int5 = 2.8;// implicit conversion
float num_float  = 2.3; // implicit conversion from double to float
short num_short = 65000;// overflow and cause warning while compiling
```

* Data loss
* char<<short<<int<<float<<double << long double




* Distinct Operations for Different types
    * int 
    * long
    * float
    * double
* if the operands are not the four types, automatic convert their types.
```C++
unsigned char a = 255;
unsigned char b = 1;
int c = a + b; //C=? C=256
```

#### C/C++ supposes
* you are smart enough
* you know what exactly the source code means