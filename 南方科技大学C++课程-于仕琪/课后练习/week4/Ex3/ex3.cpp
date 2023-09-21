#include <iostream>

enum Day{ Sunday,Monday,Tuesday,Wednesday,Thursday,Friday,Saturday};
enum Weather{Sunny,Rainy,Windy,Snowy};

struct DayInfo
{
    enum Day d;
    enum Weather w;
};

bool canTravel( DayInfo &A)
{
    if(A.d == Sunday ||A.d == Saturday)
    {
        if(A.w == Sunny)
            return true;
        return false;
    }
    return false;
}
int main()
{
    DayInfo B;
    B.d = Sunday;
    B.w = Sunny;
    if(canTravel(B))
        std::cout << "Good day for travel!!" << std::endl;
    else
        std::cout << "Not a good day for travel!!" << std::endl;
    return 0;
}