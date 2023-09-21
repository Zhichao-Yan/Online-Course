#### review function template
* fucntion template is not a type/function/other entity
* node code is generated from source codes that only contain function template
* the funtion template must be determined by arguments,then compiler produces an actual function

* function template
```C++
template <typename T>
T sum(T x,T y)
{
    cout << "The input type is" << typeid(T).name << endl;
    return x + y;
}
```

* template function 
> 1. firstly, explicitly instantiates function template（实例化模版）
> 2. then compiler generates template function according to arguments given by instantiation(实例)
```C++
// 1
template double sum<double>(double double);
// 2
template char sum<>(char,char);
// 3
template int sum(int,int);

```
> 3. also  we can implicitly instantiates function template like below
```C++
cout << "sum = " <<  sum<float>(2.2f,3.0f) << endl;
cout << "sum = " <<  sum(2.2f,3.0f) << endl;
```



# class template
* to define a class template
```C++
// class template
template<typename T>
class Mat
{
    size_t rows;
    size_t cols;
    T * data;
  public:
    Mat(size_t rows, size_t cols): rows(rows), cols(cols)
    {
        data = new T[rows * cols]{};
    }
    ~Mat()
    {
        delete [] data;
    }
    T getElement(size_t r, size_t c);
    bool setElement(size_t r, size_t c, T value);
};
```
* instantiate a class template explicitly
`template class Mat<int>;`

* instantiate a class template implicitly
`Mat<int> imat(3,4);`
`Mat<double> dmat(2,3); `
