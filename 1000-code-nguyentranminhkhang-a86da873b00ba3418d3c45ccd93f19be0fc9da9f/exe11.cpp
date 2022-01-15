#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
   int n;
   cout <<"input n ";
   cin >>n;
   int s=0,p=1;
   for(int i=1;i<=n;i++)
   {
       p*=i;
       s+=p;
   }
   cout <<s<<endl;
   
    return 0;
}
