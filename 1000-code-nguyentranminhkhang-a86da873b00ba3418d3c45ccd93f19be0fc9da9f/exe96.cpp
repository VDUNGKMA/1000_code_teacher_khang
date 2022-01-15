#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    float x;
    cout <<"input x ";
    cin >>x;
    if(x<5)
        cout <<-2*x*x+4*x-9<<endl;
    else 
        cout <<2*x*x+5*x+9<<endl;    
    return 0;
}
