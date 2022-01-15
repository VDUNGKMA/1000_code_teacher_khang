#include <iostream>
#include <math.h>
using namespace std;
int caculater(int k)
{
    int a=1;
    if(k==0)
    {
        return 1;
    }
    for(int i=1;i<=k;i++)
    {
        a*=i;
    }
    return a;
}
int main(int argc, char const *argv[])
{
    int n,x,p=0;
    float s=0;
    cout <<"input n,x ";
    cin >>n>>x;
    for(int i=1;i<=n;i++)
    {
        s+=(float)pow(-1,i)*pow(x,i)/caculater(i);
    }
        cout <<s<<endl;
    return 0;
}
