#include <iostream>
using namespace std;
#include <math.h>
int sum(int x,int n)
{
    int s=0;
    for(int i=1;i<=n;i++)
    {
        s+=pow(x,i);
    }
    return s;
}
int main(int argc, char const *argv[])
{
    int x,n;
    cout <<"input x ,n ";
    cin>>x>>n;
    cout <<sum(x,n);
    return 0;
}
