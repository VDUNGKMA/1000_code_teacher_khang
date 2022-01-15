#include <iostream>
using namespace std;
#include<math.h>
int main(int argc, char const *argv[])
{
    int a,b,c;
    cout <<"input a,b,c ";
    cin >>a>>b>>c;
    if(a+b>c&&b+c>a&&c+a>b)
        {
            cout <<"This is triangle ";
            if((sqrt(a*a+b*b)==c&&a==b)||(sqrt(c*c+b*b)==a&&c==b)||(sqrt(a*a+c*c)==b&&a==c))
                cout <<"square scale "; 
            else if(sqrt(a*a+b*b)==c||sqrt(c*c+b*b)==a||sqrt(a*a+c*c)==b)
                cout <<"square ";
            else if(a==b&&b==c)
                cout <<"right";
            else 
                cout <<"normal";
        }  
    else 
        cout <<"This is'nt triangle";
    return 0;
}
