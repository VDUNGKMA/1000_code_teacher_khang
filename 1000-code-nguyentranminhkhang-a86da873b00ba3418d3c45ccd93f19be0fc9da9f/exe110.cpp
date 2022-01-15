#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int a=1000,b=2000,c=5000;
    for(int i=0;i<=200;i++)
    {
        for(int j=0;j<=100;j++)
        {
            for(int k=0;k<=40;k++)
            {
                if( i*1000+j*2000+k*5000==200000 )
                    cout <<i<<" (1000USD) "<<j<<" (2000USD) "<<k<<" (5000USD)"<<endl;
            }
        }
    }
    return 0;
}
