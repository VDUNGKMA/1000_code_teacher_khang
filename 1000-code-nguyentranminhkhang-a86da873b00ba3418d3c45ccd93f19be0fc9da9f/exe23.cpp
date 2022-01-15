#include <iostream>
using namespace std;
#include <math.h>

int main(int argc, char const *argv[])
{
    int n,count=0;
    cout <<"input n ";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            count++;
        }
    }
    cout <<count<<endl;
    return 0;
}
