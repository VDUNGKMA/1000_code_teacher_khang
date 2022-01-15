#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int N,s=0;
    cout <<"input N ";
    cin >>N;
    for(int i=0;i<N;i++)
    {
        if(i%2!=0)
            s+=i;
    }
        cout <<s<<endl;
    return 0;
}
