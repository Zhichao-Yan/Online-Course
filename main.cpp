#include <iostream>

using namespace std;
int main(int argc,char *agrv[],char* envp[])
{
    char **ep;
    for(ep =envp;*ep!=nullptr;ep++)
    {
        cout  << *ep << endl;
    }
    return 0;
}