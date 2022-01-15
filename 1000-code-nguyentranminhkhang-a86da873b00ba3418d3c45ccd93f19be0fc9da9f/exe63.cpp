#include <iostream>
using namespace std;

int find_UCLN(int a,int b)
{
    if(a==0)
    {
        return b;
    }
    else if(b==0)
    {
        return a;
    }
    else
    {
        while(a!=b)
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
    cout <<"input a,b ";
    cin >>a>>b;
    if(a==b&&b==0)
    {
        cout <<a<<endl;
    }
    else
        cout <<a*b/find_UCLN(a,b)<<endl;    
    
    return 0;
}
