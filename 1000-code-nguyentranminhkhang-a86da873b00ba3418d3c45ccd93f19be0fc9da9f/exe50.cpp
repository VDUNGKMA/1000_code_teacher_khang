#include <iostream>
using namespace std;
#include <math.h>

int main(int argc, char const *argv[])
{
    int n,arr[100];
    cout <<"input n ";
    cin >>n;
    int change =n,sum=0,count=0,figure_out=0;
    while(change/10!=0)
    {
        arr[count]=change%10;
        count++;
        change/=10;
        figure_out++;
    }
    arr[count++]=(n/pow(10,figure_out));
    for(int i=0;i<count;i++)
    {
        sum+=pow(10,count-1-i)*arr[i];
    }
    cout <<sum<<endl;
    return 0;
}
