#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
   int n,x;
   int assignment=1;
   cout <<"input x,n ";
   cin >>x>>n;
    for(int i=0;i<n;i++)
    {
        assignment*=x;
    }
    cout <<assignment<<endl;
   
    return 0;
}
