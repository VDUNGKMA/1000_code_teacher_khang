#include<iostream>
using namespace std;
int sum(int n)
{
    int s=0;
    for(int i=0;i<=n;i++)
    {
        s+=i;
    }
    return s;
}
int main(int argc, char const *argv[])
{
    int n;
    cout <<"n ";
    cin>>n;
    cout <<sum(n);
    return 0;
}
