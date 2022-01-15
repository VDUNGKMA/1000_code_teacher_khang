#include <iostream>
using namespace std;
#include <math.h>

int main(int argc, char const *argv[])
{
    int n;
    cout <<"input n ";
    cin >>n;
    int change =n,multi=1,max=0,figure_out=0;
    while(change/10!=0)
    {
        multi=change%10;
        change/=10;
        figure_out++;
        if(multi>max)
        {
            max=multi;
        }
    }
    int k=(n/pow(10,figure_out));
        if(k>max)
        {
            max=k;
        }
    cout <<max<<endl;
    return 0;
}
