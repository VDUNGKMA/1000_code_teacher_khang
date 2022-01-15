#include <iostream>
using namespace std;
#include <math.h>
int giaithua(int &a)
{
    int multi=1;
    for(int i=1;i<=a;i++)
    {
        multi*=i;
    }
    return multi;
}
int main(int argc, char const *argv[])
{
    int x, n,p;
    float sum = 1;
    cout << "input x,n ";
    cin >> x >> n;
    for (int i = 0; i <= n; i++)
    {
        int k=2*i+1;
        p=giaithua(k);
        sum += pow(x,2*i+1)/(float)p;
    }
    cout << sum << endl;
    return 0;
}
