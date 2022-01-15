#include <iostream>
using namespace std;
#include <math.h>

int main(int argc, char const *argv[])
{
    int n,sum=0,division=1,figure_out=0;
    cout <<"input n ";
    cin >>n;
    int change =n;
    while(change/10!=0)
    {
       division=change%10;
        change/=10;
        figure_out++;
        if(division%2==0)
        {
            sum+=division;
        }
    }
    int k=(n/pow(10,figure_out));
        if(k%2==0)
        {
            sum+=k;
        }
    cout <<sum<<endl;
    return 0;
}
