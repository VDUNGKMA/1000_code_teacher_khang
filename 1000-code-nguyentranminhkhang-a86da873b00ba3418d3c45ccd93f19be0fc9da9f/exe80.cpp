#include <iostream>
using namespace std;
#include <math.h>
int main(int argc, char const *argv[])
{
    int n,x,p=0;
    float s=0;
    cout <<"input n,x ";
    cin >>n>>x;
    for(int i=1;i<=n;i++)
    {
        p+=i;
        s+=pow(x,i)/(float)p;
    }
        cout <<s<<endl;


    return 0;
}
