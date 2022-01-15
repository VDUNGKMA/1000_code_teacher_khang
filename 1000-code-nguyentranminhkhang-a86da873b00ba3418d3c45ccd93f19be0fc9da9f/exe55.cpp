#include <iostream>
using namespace std;
#include <math.h>

int main(int argc, char const *argv[])
{
    int n;
    cout <<"input n ";
    cin >>n;
    int change =n,arr[100],figure_out=0,count=0,dem=0;
    while(change/10!=0)
    {
        arr[count]=change%10;
        change/=10;
        figure_out++;
        count++;
    }
     arr[count]=(n/pow(10,figure_out));
    for(int i=0;i<=count;i++)
    {
        if(arr[i]==arr[count])
        {
             dem++;
        }
    }
    cout <<dem<<endl;
    
    return 0;
}
