#include <iostream>
using namespace std;
#include <math.h>
int main(int argc, char const *argv[])
{
    int n,arr[100];
    cout <<"input n ";
    cin >>n;
    int change=n,i=0,count=0,dem=0;
   while(change/10!=0)
   {
       arr[i]=change%10;
       change/=10;
       count++;
       i++;
   }
   arr[i]=n/pow(10,count);
    for(int k=0;k<i;k++)
    {
        if(arr[k]-arr[k+1]<0)
        {
            dem++;
        }
    }
    if(dem==0)
        cout <<"number "<<n<<" is asending from left to right"<<endl;
    else 
        cout <<"number "<< n <<" is notasending from left to right"<<endl;
    return 0;
}
