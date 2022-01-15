#include <iostream>
using namespace std;
#include <math.h>

int main(int argc, char const *argv[])
{
    int n;
    cout <<"input n ";
    cin >>n;
    int change =n,r=1,figure_out=0,s=0,change1=n;
    while(change/10!=0)
    {
        change/=10;
        figure_out++;
    }
    s+=n/pow(10,figure_out);
    do
    {
        r=change1%10;
        r*=pow(10,figure_out);
        s+=r;
        change1/=10;
        figure_out--;
    } while (change1/10!=0);
    if(s==n)
    {
        cout <<"this number is symetry number "<<endl;
    }
    else 
        cout <<"this number isn't symetry number"<<endl;
    return 0;
}
