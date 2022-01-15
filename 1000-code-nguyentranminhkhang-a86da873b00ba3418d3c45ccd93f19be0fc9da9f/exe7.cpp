#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
   int n;
   float sum=0;
   cout <<"input n ";
   cin >>n;
   for(int i=1;i<=n;i++)
   {
       sum+=(float)i/(i+1);
   }
   cout <<sum<<endl;
   
    return 0;
}
