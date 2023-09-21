### Error handling

##### Solution

1. kill the program when error occurs
```C++
// not a good solution, not reasonable,not sensible,too rough
float ratio(float a, float b)
{
    if (fabs(a + b) < FLT_EPSILON)
    {
        std::cerr << "The sum of the two arguments is close to zero." << std::endl;
        std::abort();
    }
    return (a - b) / (a + b);
    //return int(a - b) / int(a + b);// divided by zero behavior differently for int and float
}
```
2. tell the caller by return value when error occurs and use 3th parameter to return result
```C++
// better than solution 1
bool ratio(float a, float b, float & c)
{
    if (fabs(a + b) < FLT_EPSILON)
    {
        std::cerr << "The sum of the two arguments is close to zero." << std::endl;
        return false;
    }
    c = (a - b) / (a + b);
    return true;
}
```
3. Throw exceptions-C++ feature
> 异常抛出要捕获，如果不捕获会导致系统杀死程序
```C++
// 异常发生
float ratio(float a, float b)
{
    if (fabs(a + b) < FLT_EPSILON)
        throw "The sum of the two arguments is close to zero.";

    return (a - b) / (a + b);
}
```
```C++ 
            try{
                z = ratio(x,y);
                std::cout << "ratio(" << x << ", " << y<< ") = " << z << std::endl;
            }
            catch(const char * msg)
            {
                std::cerr << "Call ratio() failed: " << msg << std::endl;
                std::cerr << "I give you another chance." << std::endl;
            }
```