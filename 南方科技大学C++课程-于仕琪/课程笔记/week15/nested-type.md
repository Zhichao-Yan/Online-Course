
### nested enum
* nested enum can be put inside a class
```C++
class Mat
{
public:
    enum DataType
    {
        TYPE8U,
        TYPE8S,
        TYPE32F,
        TYPE64F
    };
private:
    DataType type;
    void * data;
public:
    Mat(DataType type) : type(type), data(NULL){}

    DataType getType() const { return type;  }
};

```
* it can be acessed from outside of class but with a scope qualifer `Mat::DataType::TYPE8U`

-------
### nesed class
* Nested classes: the declaration of a class/struct or union may appear inside another class
```C++
class Storage
{
public: 
    class Fruit
    {
        string name;
        int weight;
    public:
        Fruit(string name="", int weight=0):name(name), weight(weight){}
        string getInfo(){return name + ", weight " + to_string(weight) + "kg.";}
    };
};
```
* Usage of nested class: must be used within the scope `Storage::Fruit apple("apple", 100);`
* access control
    * private: only be used in current class which contains it 
    * public: visible to the class and outside world  of class
    * protected: only be used in class which contains it and its derived class
