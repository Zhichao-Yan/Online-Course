### nothrow new

* throw new
```C++
int * p = nullptr;
try{
    // may throw an exception
    p = new int [length];// dynamic allocation must have exception handling
    // if failed,it throws a exception,we should handle it
}
catch (std: bad_alloc &ba)
{
    std::cerr << ba.what() << endi;
}
```

* nothrow new
```C++
int * p = nullptr;
p = new(nothrow) int[length];// nothrow new
// if failed,will not throw a exception
// if new failed, then p == nullptr;
if (p == nullptr)
{... }
```