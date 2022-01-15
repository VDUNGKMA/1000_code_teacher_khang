#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char const *argv[])
{
    float a,b,c;
    cout <<"input a,b,c ";
    cin >>a>>b>>c;
    if(a==0)
    {
        if(b==0)
            if(c==0)
        cout <<"equation is many test "<<endl;
            else
                cout <<"equation is 0 test"<<endl;
        else 
            cout <<-c/b<<endl;
    }
    else 
    {
        float delta=b*b-4*a*c;
        if(delta<0)
            cout <<"equation is 0 test "<<endl;
        else if(delta==0)
            cout <<-b/(2*a)<<endl;
        else 
     
            cout <<"x1= "<<(-b+sqrt(delta))/(2*a)<<endl<<"x2= "<<(-b-sqrt(delta))/(2*a)<<endl;

    }   

    return 0;
}
