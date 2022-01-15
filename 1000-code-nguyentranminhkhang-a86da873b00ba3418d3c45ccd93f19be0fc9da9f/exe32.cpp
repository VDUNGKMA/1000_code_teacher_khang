#include <iostream>
using namespace std;
#include <math.h>
int main(int argc, char const *argv[])
{
    int n;
    cout <<"input n ";
    cin >>n;
    int square2=sqrt(n);
    if(square2*square2==n)
        cout <<"this is number prime "<<endl;
    else
        cout <<"this is not number prime "<<endl;
    
    return 0;
}
