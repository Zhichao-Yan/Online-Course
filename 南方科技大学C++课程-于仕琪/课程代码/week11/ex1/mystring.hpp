#pragma once

#include <iostream>
#include <cstring>

class mystring
{
private:
    int buf_len;
    char *characters;
public:
    mystring(int buf_len = 64,const char* data = nullptr)
    {
        std::cout << "Constructor(int, char*)" << std::endl;
        this->buf_len = 0;
        this->characters = nullptr;
        create(buf_len,data);
    }
    bool create(int buf_len,const char *data)
    {
        this->buf_len = buf_len;
        if(this->buf_len != 0)
        {
            this->characters = new char[this->buf_len]{};
            if(data)
            {
                strncpy(this->characters,data,this->buf_len);
            }
        }
        return true;
    }
    ~mystring()
    {
        delete []this->characters;
    }
    friend std::ostream& operator<<(std::ostream &os,const mystring &m)
    {
        os << "buf_len = " << m.buf_len;
        os << ", charactors = " << static_cast<void*>(m.characters);
        os << '[' << m.characters << ']';
        return os;
    }
};