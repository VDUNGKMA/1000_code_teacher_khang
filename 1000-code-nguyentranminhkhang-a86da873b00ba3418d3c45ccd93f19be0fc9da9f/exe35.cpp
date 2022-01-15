#include <iostream>
using namespace std;
#include <math.h>
int main(int argc, char const *argv[])
{
    int n;
    cout <<"input n ";
    cin >>n;
    float s1=sqrt(n),s2=sqrt(n);
    for(int i=n;i>=2;i--)
    {
        s2=sqrt(i-1+s1);
        s1=s2;
    }
    cout <<s2<<endl;
    return 0;
}
