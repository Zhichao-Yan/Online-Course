#include <iostream> 
using namespace std;
class Demo
{
public:
    static int num;
    void display()
    {
        cout << "The value of the static member variable num is: " << num << endl;
    }
};
int Demo::num = 100;// fix it
// unsuccessful
// static int num only has statement but without definiton
// display function cannot be invoke by the class Demo since it is not a stati function
int main()
{
    Demo obj;
    obj.display();
    Demo::num = 200;
    obj.display();
    return 0;
}