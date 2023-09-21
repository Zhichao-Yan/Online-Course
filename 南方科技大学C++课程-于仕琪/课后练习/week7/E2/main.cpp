#include <iostream> 
using namespace std;
void displaySquare(int side = 4, char filledChar = '*');// 函数实参数应该放到函数声明中

int main()
{
    displaySquare();
    displaySquare(10, '#');
    displaySquare(5, '&');// fix
    displaySquare(2);
    return 0;
}

// 一般把默认实参放入函数声明中，函数定义实现则不用
void displaySquare(int side, char filledChar)// fix 函数上面有声明，默认实参不可以重复
{
    for (int i = 0; i < side; i++)
    {
        for (int j = 0; j < side; j++)
            cout << filledChar;
        cout << "\n";
    }
}