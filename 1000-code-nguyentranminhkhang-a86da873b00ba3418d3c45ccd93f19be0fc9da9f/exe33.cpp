#include <iostream>
using namespace std;
#include <math.h>
int main(int argc, char const *argv[])
{
    int n;
    float s1=sqrt(2),s2=sqrt(2);
    cout <<"input n ";
    cin>>n;
    for(int i=1;i<n;i++)
    {
        s2=sqrt(2+s1);
        s1=s2;
    }
    cout <<s2<<endl;

    return 0;
}
