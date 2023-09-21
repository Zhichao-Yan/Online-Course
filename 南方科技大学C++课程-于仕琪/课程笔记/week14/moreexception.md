### Handling exception

* A try block can be followed by multiple catch blocks.
```C++
float ratio(float a, float b)
{
    if (a < 0)
        throw 1;
    if (b < 0)
        throw 2;
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
        catch(int eid)
        {
            if (eid == 1)
                std::cerr << "Call ratio() failed: the 1st argument should be positive." << std::endl;
            else if (eid == 2)
                std::cerr << "Call ratio() failed: the 2nd argument should be positive." << std::endl;
            else
                std::cerr << "Call ratio() failed: unrecognized error code." << std::endl;

            std::cerr << "I give you another chance." << std::endl;
        }
```
* If the caller does not handle, throw it to the caller of the caller, or until main ()
```C++
float ratio(float a, float b) 
{
    if (a < 0)
        throw 1;
    if (b < 0)
        throw 2;
    if (fabs(a + b) < FLT_EPSILON)
        throw "The sum of the two arguments is close to zero.";

    return (a - b) / (a + b);
}
```
```C++
float ratio_wrapper(float a, float b)
{
    try{
        return ratio(a, b);
    }
    catch(int eid)
    {
        if (eid == 1)
            std::cerr << "Call ratio() failed: the 1st argument should be positive." << std::endl;
        else if (eid == 2)
            std::cerr << "Call ratio() failed: the 2nd argument should be positive." << std::endl;
        else
            std::cerr << "Call ratio() failed: unrecognized error code." << std::endl;
    }
    return 0;
}
```
```C++
        try{
            z = ratio_wrapper(x,y);
            std::cout << "ratio(" << x << ", " << y<< ") = " << z << std::endl;
        }
        catch(const char * msg)
        {
            std::cerr << "Call ratio() failed: " << msg << std::endl;
            std::cerr << "I give you another chance." << std::endl;
        }
```

* if an exception is not caught, it will reach to the top caller, and terminate the program
    * Question:how to deal with it???
    * Answer: A catch-all handler can catch all kinds of exceptions.
    ```C++
    // A catch-all handler
    catch(...)
    {
        std::cerr << "Unrecognized Exception" << std::end;
    }
    ```

* If an object is thrown, and its class is derived from another class. An exception handler with the base class type can catch the exception.
```C++
try
{
    throw Derived();
}
catch (const Base& base) // encount firstly and catch the exception
{
    std::cerr << "I caught Base." << std::endl;
}
catch (const Derived& derived)
{  
     //exception never reach here because Derived() is caught by exception 
     // handler "catch (const Base& base)"
    std::cerr << "I caught Derived." << std::end;
}
```

--------
### std::exception 
* std:: exception is a class which can be a base class to any exception.
* Function std: exception: : what () can be overided to return a C-style string message.
* C++ standard excption class which derived from std::exception class
    * logic_error
    * domain_error
    * invalid_error
    * length_error
    * out_of_range
    * runtime_error
    * range_error
    * overflow_error
    * underflow_error

--------
#### noexcept specifier
> The noexcept specifier defines a function which will not throw anything.
`void foo() noexcept;`

