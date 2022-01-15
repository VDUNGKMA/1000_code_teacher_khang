#include <iostream>
using namespace std;
#include <math.h>
int main(int argc, char const *argv[])
{
   int x,n,sum=0;
   cout <<"input x,n ";
   cin >>x>>n;
   for(int i=1;i<=n;i++)
   {
       sum+=pow(x,i);
   }
   cout <<sum<<endl;
   
    return 0;
}
