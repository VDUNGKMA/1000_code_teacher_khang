#include <iostream>
using namespace std;
#include <math.h>
int check_main_number_method(int k)
{
    int square_root=sqrt(k);
    if (k==0)
        return 0;
    else if(square_root*square_root==k)
        return 1;
    else 
        return 0;
}
int main(int argc, char const *argv[])
{
    int n;
    cout<<"input n ";
    cin >>n;
    for(int i=0;i<n;i++)
    {
        if(check_main_number_method(i)==1)
            cout<<i<<" ";
    }
    return 0;
}
 