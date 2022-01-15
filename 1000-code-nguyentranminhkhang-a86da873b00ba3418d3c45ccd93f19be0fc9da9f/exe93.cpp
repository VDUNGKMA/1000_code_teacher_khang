#include <iostream>
using namespace std;
void check_prime(int n)
{
    int count =0;
    if(n<2)
        cout <<"this number is not prime ";
    else 
    {
        for(int i=2;i<n;i++)
        {
            if(n%i==0)
                count++;
        }
    }
    if(count ==0)
        cout <<"this number is prime ";
    else 
        cout <<"this number is not prime";
}
int main(int argc, char const *argv[])
{
    int n;
    cout <<"input n ";
    cin >>n;
    check_prime(n);
    
    return 0;
}
