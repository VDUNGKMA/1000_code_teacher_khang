#include <iostream>
using namespace std;
#include <math.h>

int main(int argc, char const *argv[])
{
    int n;
    int max=1;
    cout <<"input n ";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
      if(n %i ==0 && i%2!=0)
        {
             max=i;
        }
    }
    cout << max<<endl;
    return 0;
}
