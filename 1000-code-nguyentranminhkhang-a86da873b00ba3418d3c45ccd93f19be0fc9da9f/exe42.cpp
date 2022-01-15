#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n,s1=0,count=0;
    cout <<"input n ";
    cin>>n;
    for(int i=1;i<n;i++)
    {
        s1+=i;
        count++;
        if(s1>n||s1==n)
        {
            break;
        }
    }
    if(n<=2)
    {
        cout <<count<<endl;
    }
    else
        cout <<count-1<<endl;


    return 0;
}
