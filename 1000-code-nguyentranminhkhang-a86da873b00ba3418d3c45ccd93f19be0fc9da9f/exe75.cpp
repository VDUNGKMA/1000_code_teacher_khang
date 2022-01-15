#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cout <<"input n ";
    cin >>n;
    if(n%2==0)
        cout <<"number "<<n<<" have format 2^k "<<endl;
    else 
        cout <<"number "<<n<<" haven't format 2^k "<<endl;
    return 0;
}
