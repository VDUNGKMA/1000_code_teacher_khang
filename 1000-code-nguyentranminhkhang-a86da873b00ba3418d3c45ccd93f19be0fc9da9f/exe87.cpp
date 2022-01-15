#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int s=0;
    for(int i=1;;i++)
    {
        s+=i;
        if(s>10000)
        {
            cout <<i<<endl;
            break;
        }
    }
    return 0;
}
