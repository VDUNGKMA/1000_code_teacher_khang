#include <iostream>
using namespace std;
#include <math.h>

int main(int argc, char const *argv[])
{
    int n,multi=1;
    cout <<"input n ";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            multi*=i;
        }
    }
    cout <<multi<<endl;
    return 0;
}
