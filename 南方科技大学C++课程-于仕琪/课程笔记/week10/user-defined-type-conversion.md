* overloaded type conversion:convert current to another type
```C++
operator int() const
{
    return this->hours * 60 + this->minutes;
}
explicit operator float() const
{
    return float(this->hours * 60 + this->minutes);
}
```
* Convertin constructor: convert another type to current
```C++
MyTime (int m): hours (0), minutes (m)
{
    this->hours += this->minutes / 60；
    this->minutes %= 60;
}
``` 