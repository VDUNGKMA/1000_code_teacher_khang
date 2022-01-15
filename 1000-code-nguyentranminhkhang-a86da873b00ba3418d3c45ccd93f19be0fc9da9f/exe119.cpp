#include <iostream>
using namespace std;
int check_prime(int k)
{
    int dem=0;
    if(k<2)
        return 0;
    else 
        {
            for(int i=2;i<k;i++)
            {
              if(k%i==0)
                dem++;
            }
                if (dem==0)
                    return 1;
                else 
                    return 0;
        }
}
int main(int argc, char const *argv[])
{
    int n;
    cout <<"input n ";
    cin >>n;
    for(int i=0;i<=n;i++)
    {
        if(check_prime(i)==1)
            cout <<i<<" ";
    }
    return 0;
}
