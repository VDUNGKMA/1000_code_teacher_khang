#include <iostream>
using namespace std;
#include <math.h>

int main(int argc, char const *argv[])
{
    int n;
    cout <<"input n ";
    cin >>n;
    int change =n,multi=1,count=0;
    while(change/10!=0)
    {
        change/=10;
        count++;
    }
    int k=n/pow(10,count);
    cout <<k<<endl;
    return 0;
}
