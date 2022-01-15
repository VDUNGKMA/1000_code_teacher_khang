#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n,x,p=0;
    float s=0;
    cout <<"input n,x ";
    cin >>n>>x;
    for(int i=1;i<=n;i++)
    {
        p+=i;
        s+=(float)pow(-1,i)*pow(x,i)/p;
    }
        cout <<s<<endl;
    return 0;
}
