#include <iostream>
using namespace std;
#include <math.h>
int  square(int *p,int &n)
{
    int k=n;
    int i=0;
    do
    {
        *(p+i)=k%10;
        k/=10;
        i++;
    } while (k>0);
    return i;
}
int check_amstrong(int *p,int &n)
{
    int sum=0,count=square(p,n);
    for(int i=0;i<count;i++)
    {
        sum+=pow(*(p+i),count);
    }
    if(sum==n)
        return 1;
    else 
        return 0;
}
int main(int argc, char const *argv[])
{
    int *p;
    for(int i=1;i<=pow(10,6);i++)
    {
        if(check_amstrong(p,i)==1)
            cout<<i<<" ";
    }
    
    return 0;
}
