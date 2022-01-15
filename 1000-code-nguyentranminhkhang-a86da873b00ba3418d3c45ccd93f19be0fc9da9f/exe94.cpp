#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    for(int i=1;i<100;i++)
    {
        if((i%2!=0)&&i!=3)
        { 
            if(i!=5&&i!=93)
                cout <<i<<"\t";        
        }
    }
    return 0;
}
