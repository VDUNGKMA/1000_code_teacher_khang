#include <iostream>
using namespace std;
#include <math.h>
int main(int argc, char const *argv[])
{
    int  x,n; 
    float sum=0,p=1;
    cout <<"input x,n ";
    cin >>x>>n;
    for(int i=1;i<=n;i++)
    {
        p*=i;
        sum+=pow(x,i)/p;
    }
    cout <<sum<<endl;
    return 0;
}
