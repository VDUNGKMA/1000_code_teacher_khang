#include <iostream>
using namespace std;
#include <math.h>

int main(int argc, char const *argv[])
{
    int n;
    cout <<"input n ";
    cin >>n;
    int change =n,arr[100],figure_out=0,count=0,multi=1;
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
        multi*=arr[i];
    }
    if(multi%2!=0)
    {
          cout <<"all number is odd number"<<endl;

    }
    else 
        cout <<"this number is not an all odd number "<<endl;
  
    return 0;
}
