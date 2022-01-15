#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    float s1=(float)1/2,s2=(float)1/2;
    cout <<"input n ";
    cin >>n;
    
    for(int i=2;i<=n;i++)
    {
        s2=1/(1+s1);
        s1=s2;
     }
    cout <<s2<<endl;
    return 0;
}
