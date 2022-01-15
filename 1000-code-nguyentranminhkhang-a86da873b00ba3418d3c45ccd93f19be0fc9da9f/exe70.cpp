#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n,p=0;
    float s=0;
    cout <<"input n ";
    cin >>n;
    for(int i=1;i<=n;i++)
    {
        p+=i;
        s+=(float)pow(-1,i+1)/(p);
    }
        cout <<s<<endl;
    return 0;
}
