#include <iostream>
using namespace std;
#include <math.h>

int main(int argc, char const *argv[])
{
    int n;
    cout <<"input n ";
    cin >>n;
    int change =n,sum=0,count=0;
    while(change/10!=0)
    {
        sum+=change%10;
        change/=10;
        count++;
    }
    sum+=n/pow(10,count);
    cout <<sum<<endl;
    return 0;
}
