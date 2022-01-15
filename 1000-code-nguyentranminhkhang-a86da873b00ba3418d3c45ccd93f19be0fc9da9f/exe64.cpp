#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char const *argv[])
{
    float a,b;
    cout <<"input a,b ";
    cin >>a>>b;
    if(a==b&&b==0)
        cout <<"equation is many test "<<endl;
    else if(a==0&&b!=0)
        cout <<"equation is 0 test "<<endl;
    else 
        cout <<-b/a<<endl; 
    return 0;
}
