#include <iostream>
using namespace std;
#include <math.h>
int main(int argc, char const *argv[])
{
    int n,s=0;
    cout <<"input n ";
    cin >>n;
    for(int i=1;i<=n;i++)
    {
        s+=pow(i,3);
    }
    cout <<s<<endl;
    return 0;
}
