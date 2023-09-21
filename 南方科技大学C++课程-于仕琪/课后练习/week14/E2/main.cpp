#include <iostream>
#include <exception>
#include <cstdio>
#include <cstring>
using namespace std;

class OutOfRangeException:public exception
{
private:
    int id;
    int num;
    string re;
    //char str[100] = {'\0'};
public:
    OutOfRangeException(int i, int val):id(i),num(val)
    {
        re += "The parameter ";
        re += to_string(id);
        re += " is ";
        re += to_string(num);
        re += " which is out of range(0-100).";
        // sprintf(str,"The parameter %d is %d which is out of range(0-100).",id,num);
    }
    virtual const char* what() const noexcept
    {
        return re.c_str();
        //return str;
    }
};

float calculateAverage(int a,int b,int c,int d)
{
    return (a + b + c + d)/4.0f;
}

int main()
{
    char ch;
    do{
        cout << "please enter marks for four courses:";
        try{
            //int arg[4] = {101,200,12,12};
            int arg[4]{0};
            cin >> arg[0] >> arg[1] >> arg[2] >> arg[3];
            for(int i = 1;i <= 4;++i)
            {
                if(arg[i - 1]< 0 || arg[i - 1] > 100)
                {
                    throw OutOfRangeException(i,arg[i - 1]);
                }
            }
            float ave = calculateAverage(arg[0],arg[1],arg[2],arg[3]);
            cout << "the average of the four courses is:" << ave << endl;
        }catch(const OutOfRangeException &err)
        {
            cout << err.what() << endl;
        }
        cout << "would you want to enter another marks for 4 courses(y/n):";
        cin >> ch;
    }while(ch == 'Y'||ch == 'y');
    cout << "Bye, see you next time";
    return 0;
}