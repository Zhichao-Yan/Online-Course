#include <iostream>
#include <memory>
using namespace std;

int main()
{
    unique_ptr<int> p1(new int(9));
    cout << "p1's content:" << *p1 << endl;
    unique_ptr<string> p2(new string("hello world"));
    cout << "p2's content:" << *p2 << endl;
    unique_ptr<string> p3 = make_unique<string>("good morning");
    cout << "p3's content:" << *p3 << endl;
    unique_ptr<int[]> p4 = make_unique<int[]>(5);
    cout << "p4's content:" << endl;
    for(int i = 0; i < 5; i++)
        cout << p4[i] << " ";
    cout << endl;
    float *p = new float[3]{1,2,3};
    unique_ptr<float[]> p5(p);
    cout << "p5's content:" << endl;
    for(int i = 0; i < 3; i++)
        cout << p5[i] << " ";
    cout << endl;  
    unique_ptr<int> p6 = std::move(p1);
    cout << "p6's content:" << *p6 << endl;
}