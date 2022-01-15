#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n,x,s=0;
    cout <<"input n,x ";
    cin >>n>>x;
    for(int i=0;i<=n;i++)
    {
        s+=pow(-1,i)*pow(x,2*i+1);
    }
        cout <<s<<endl;    
    return 0;
}
