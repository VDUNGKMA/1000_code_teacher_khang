#include <iostream>
using namespace std;

int find_GCD(int a,int b)
{
    if(a==0)    
        return b;
    if(b==0)
        return a;
    else 
        {
            while (a!=b)
        {
            if(a>b)
                a-=b;
            else 
                b-=a;
        }
        return a;
    }
}
int main(int argc, char const *argv[])
{
    int a,b;
    cout <<"input number a,b ";
    cin >>a>>b;
    cout <<find_GCD(a,b);
    return 0;
}
