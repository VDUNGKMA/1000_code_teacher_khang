#include <iostream>
using namespace std;
#include <math.h>
int giaithua(int n )
{
    int p=1;
    for(int i=1;i<=n;i++)
    {
        p*=i;
    }
    return p;
}
int main(int argc, char const *argv[])
{
    float x;
    cout <<"input x ";
    cin >>x;
    float b=x*3.14/180,s=0;
    int i=0;
    do
    {
        s+=pow(-1,i)*pow(b,2*i+1)/giaithua(2*i+1);
        i++;
    }while(fabs(pow(b,2*i+1)/giaithua(2*i+1))>=0.00001);
    cout <<"sin("<<x<<")= "<<s;
    return 0;
}
