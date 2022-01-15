#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cout <<"input n ";
    cin >>n;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            cout <<i<<" ";
        }
    }
    return 0;
}
