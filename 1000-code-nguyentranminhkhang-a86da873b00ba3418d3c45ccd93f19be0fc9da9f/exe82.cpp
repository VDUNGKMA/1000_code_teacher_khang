#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    float a,b,c;
    cout <<"input a,b,c ";
    cin >>a>>b>>c;
    if(a>=b&&a>=c)
        cout <<a<<endl;
    else if(b>=a&&b>=c)
        cout <<b;
    else 
        cout <<c;    
    return 0;
}
