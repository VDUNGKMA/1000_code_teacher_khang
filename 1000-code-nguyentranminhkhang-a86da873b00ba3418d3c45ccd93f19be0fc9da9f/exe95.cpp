#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    float a,b,c;
    cout <<"input 3 number a,b,c ";
    cin >>a>>b>>c;
    if (a<0)
        a=-a;
    if(b<0)
        b=-b;
    if(c<0)
        c=-c;
    cout <<a<<endl<<b<<endl<<c<<endl;
        
    return 0;
}
