#pragma once // 整个头文件只能包含一次，用于防止头文件的重复包含，
// 只能对整个文件进行说明，相比#ifdef范围控制大，不够精确

#include <cstring>
class Student
{
  private:
    char name[4];
    int born;
    bool male; 
  public:
    void setName(const char * s)
    {
        strncpy(name, s, sizeof(name));
    }
    void setBorn(int b)
    {
        born = b;
    }
    // the declarations, the definitions are out of the class
    void setGender(bool isMale);
    void printInfo();
};