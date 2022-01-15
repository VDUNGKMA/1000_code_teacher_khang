#include <iostream>
using namespace std;
#include <math.h>
int main(int argc, char const *argv[])
{
    int x,n;
    cout <<"input x,n";
    cin >>x>>n;
    int sum=0;
    for(int i=1;i<=n;i++)
    {
        sum+=pow(x,2*i);
    }
    cout <<sum;

    return 0;
}
