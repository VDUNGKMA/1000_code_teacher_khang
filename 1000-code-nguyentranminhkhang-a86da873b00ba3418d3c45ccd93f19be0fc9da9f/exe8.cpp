#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
   int n;
   float sum=0;
   cout <<"input n";
   cin >>n;
   for(int i=0;i<=n;i++)
   {
       sum+=(float)(2*i+1)/(2*i+2);
   }
   cout <<sum<<endl;
   
    return 0;
}
