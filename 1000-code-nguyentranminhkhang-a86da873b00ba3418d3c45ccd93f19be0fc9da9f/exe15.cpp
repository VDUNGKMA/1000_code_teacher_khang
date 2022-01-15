#include <iostream>
using namespace std;
#include <math.h>
int main(int argc, char const *argv[])
{
    int n;
    cout <<"input n ";
    cin >>n;
     float sum=0,p=0;
    for(int i=1;i<=n;i++)
    {
        p+=i;
        sum+=1/p;
    }
    cout <<sum<<endl;
    return 0;
}
