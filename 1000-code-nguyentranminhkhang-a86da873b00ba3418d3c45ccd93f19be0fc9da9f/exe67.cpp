#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n,x,s=0;
    cout <<"input n,x ";
    cin >>n>>x;
    for(int i=1;i<=n;i++)
    {
        s+=pow(-1,i+1)*pow(x,i);
    }
        cout <<s<<endl;    

    return 0;
}
