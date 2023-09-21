### RTTI 
RTTI
: Runtime Type Identification

#### Both dynamic_cast support RTTI (during runtime)
1. **dynamic_cast**: conversion of polymorphic types.
2.  **typeid** operator:Identify the exact type of an object. Or determine whether two obiects are the same type
    * Accept: a name of class/ a object of class
    * returns a reference to a **type_info** object
    * **type_info** class object: 
        * the type information returned by the **typeid** operator.
        * Defined in the <typeinfo> header file
        * **type_info** overloaded == and != operators

------
### More Type Cast Operator
* dynamic_cast `dynamic_cast < type-name > ( expression )`
    * expression may be a pointer or reference
    * the real type of expression must be same type as type-name or derived from the type-name
    * this is called up-casting
    * otherwise it fails when downcasting
    * it is a safer casting compared with static_cast
* static_cast (compared to dynamic_cast)

* const_cast
* reinterpret_cast: Converts between types by reinterpreting the underlying bit pattern.
    * reinterpret according to the bits in memory
    * very dangerous
    ```C++
    int i = 5;
    float * p1 = reinterpret_cast<float*>(i);// static_cast will fail
    ```

#####  Type convert between C and C++

 | C | C++ | 
| :-----:| :----: | 
| 一种可以转多种，不变应万变，任意改变 | 兼容了C，但是包含4种不同类型转化方式| 
| 写代码需要小心注意安全，清楚转换规则 | 相对更加安全，但是需要记忆多个规则 | 
| 面向计算，数据结构没那么复杂 | 适合面向对象应用开发 | 