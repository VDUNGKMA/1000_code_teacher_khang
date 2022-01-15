#include <iostream>
using namespace std;
#include <math.h>

int main(int argc, char const *argv[])
{
    int n;
    float s1=0,s2=sqrt(2);
    cout <<"input n ";
    cin >>n;
    if(n<=1)
    {
        cout <<s1<<endl;
    }
    else
    {
        for(int i=3;i<=n;i++)
        {
            s2=pow(i+s1,1/(float)i);
            s1=s2;
        }
        cout <<s2<<endl;
    }
    
    return 0;
}
