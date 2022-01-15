#include <iostream>
using namespace std;
#include <math.h>

int main(int argc, char const *argv[])
{
    int n;
    cout <<"input n ";
    cin >>n;
    int change =n,multi=1,min=10,figure_out=0;
    while(change/10!=0)
    {
        multi=change%10;
        change/=10;
        figure_out++;
        if(multi<min)
        {
            min=multi;
        }
    }
    int k=(n/pow(10,figure_out));
        if(k<min)
        {
            min=k;
        }
    cout <<min<<endl;
    return 0;
}
