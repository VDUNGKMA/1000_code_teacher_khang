#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n; 
    cout <<"input n ";
    cin>>n;
    int change=n,count =1;
    while(change/10!=0)
    {
        change/=10;
        count++;
    }
    cout <<count<<endl;
    return 0;
}
