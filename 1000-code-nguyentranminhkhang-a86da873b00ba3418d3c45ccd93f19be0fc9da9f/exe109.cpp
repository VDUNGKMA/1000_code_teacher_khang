#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    for(int i=1;i<=9;i++)
    {
        for(int j=1;j<=9;j++)
        {
            cout <<i<<"x"<<j<<"="<<i*j<<endl;
        }
            cout <<endl;        
    }
    return 0;
}
