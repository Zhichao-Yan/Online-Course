# Array
----------
* contiguously  allocated memory
* element type can be fundamental type(int/float/char) or class/point/enumeration
```C++
int num1[5];//uninitalized array,then it contains random values;
int num2[5] = {1,2,3,4,5};
```
* variable-length array
    * variable can equl to 0
    * variable-length array can not initilized and lead to a compiling error
```C++
// 程序运行时确定数组长度，编译时无法确定
len = 4;
int num[len];
```

* unkown-size array
` int num[] = {1,2,3,4};`

* Element accessing
    * array1 = array2 error!

* No-bounds checking C/C++

* Arrays are not objects in C/C++(not like Java)
* Arrays can be regarded as addressses
    * merits: fast because no bound checking 
    * demerits: easily cause errors


* const array

### multidimensional arrays
`int mat[2][3] = {{11,12,137}, {14, 15, 16}};`

# String
---------

### Array-style string
* is a series of charactors stored in bytes with a null terminated
* `size_t strlen( const char *str);`Returns the number of characters, the first NULL will not be included.

### string literals
`char name[] = "ABCD"; // 5 bytes`

### string manipulation
* copy `char* strop( char* dest, const char* src );`
* safer copy `char *strncpy (char *dest, const char *src, size_t count);`
* concatenate `char *strcat ( char *dest, const char *src );`
* compare `int stremp( const, char *lhs, const char *rhs);`

### string class
* more easy
* no bounds checking


# struct

### struct padding


# Union

# enum