#include <iostream>
using namespace std ;

int main(int argc, char const *argv[])
{
    int n,sum=0;
    cout <<"input n ";
    cin >>n;
    for(int i=1;i<n;i++)
    {
        if(n%i==0)
        {
            sum+=i;
        }
    }
    if(sum==n)
    {
        cout <<"this is number perfect "<<endl;
    }
    else 
        cout <<"this is not number perfect "<<endl;

    return 0;
}
