#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n,sum=0;
    cout <<"input n ";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        sum+=i*i;
    }
    cout <<sum<<endl;
    return 0;
}
