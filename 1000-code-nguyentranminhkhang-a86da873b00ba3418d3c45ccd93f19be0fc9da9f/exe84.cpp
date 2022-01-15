#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    float a,b;
    cout <<"input number a,b ";
    cin >>a>>b;
    if(a==b&&b==0)
        cout <<"equation is many test ";
    else if(a==0&&b!=0)
        cout <<"equation is 0 test ";
    else 
        cout <<"equation is 1 tesr: "<<-b/a<<endl;    
    return 0;
}
