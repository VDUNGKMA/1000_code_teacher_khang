#include <iostream>
using namespace std;
#include <math.h>
int result (int k)
{
    int multi=1;
    for(int i=1;i<=k;i++)
    {
        multi*=i;
    }
    return multi;
}
int main(int argc, char const *argv[])
{
    int n;
    float s1=1,s2=1;
    cout <<"input n ";
    cin>>n;
    for(int i=2;i<=n;i++)
    {
        s2=sqrt(result(i)+s1);
        s1=s2;
    }
    cout <<s2<<endl;
    return 0;
}
