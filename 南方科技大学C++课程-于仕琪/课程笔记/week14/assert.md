## Assert for debug

* Assert is function-like macro
    * <assert.h> in C language <cassert> in C++ language
    * Do nothing if condition is true when you are debugging
    * if condition is not true/false
        * output dignostic info
        * call abort() to terminate program 
    * if NDEBUG macro is defined, Do nothing weather condition is false or true
    * The Assert macro will be useless if we define a NDEBUG
    * Be sure to define a NDEBUG macro when you release the software in order to hide debugging infomation
    * Verify the validity of the passed argument at the beginning of the function

```C++ 
#ifdef NDEBUG //if you are not in debug state
#define assert(condition) ((void)0) // then all the assert will be useless
#else
#define assert(condition) /*implementation defined*/ 
#endif
```



### Assert for OpenCV
* Many applications has their own assert statement because assert is not a C++ standard
* CV_Assert in OpenCV checks a condition at runtime and throws exception if it fails.
```C++
#define CV_Assert(expr) // expr is a conditon
do{ 
    if(!!(expr)) // if expr is true,then do nothing
    {
            ; // 空语句
    }else{
        cv::error(cv::Error::StsAssert,#expr,CV_Func,__FILE__,__LINE__); 
    } // if expr is false, then execute cv::error
}while(0)
```
* cv::error() may behavior differently with different settings.
```C++
void cv::error(int _code,const String &_err,const char *_func,const char *_file,int _line);
```