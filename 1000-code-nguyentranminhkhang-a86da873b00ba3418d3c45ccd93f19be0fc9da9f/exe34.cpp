#include <iostream>
using namespace std;
#include <math.h>
int main(int argc, char const *argv[])
{
    int n;
    float s1=1,s2=1;
    cout <<"input n ";
    cin >>n;
    for(int i=2;i<=n;i++)
    {
        s2=sqrt(i+s1);
        s1=s2;
    }
    cout <<s2;
    return 0;
}
