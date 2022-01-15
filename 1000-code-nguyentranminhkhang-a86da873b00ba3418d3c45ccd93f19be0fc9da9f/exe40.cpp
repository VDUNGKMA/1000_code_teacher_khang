#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n,x;
    cout <<"input n,x ";
    cin>>n>>x;
    float s1=sqrt(x),s2=sqrt(x);
    for(int i=2;i<=n;i++)
    {
        s2=sqrt(pow(x,i)+s1);
        s1=s2;
    }
    cout <<s2;
    return 0;
}