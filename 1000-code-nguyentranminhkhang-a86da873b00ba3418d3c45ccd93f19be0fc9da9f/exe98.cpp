#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    float a,b,c,d,e,f;
    cout <<"input a,b,c,d,e,f ";
    cin >>a>>b>>c>>d>>e>>f;
    if(a/d==b/e&&a/d==c/f)
        cout <<"equation is many test ";
    else if(a==b==c==d==e==f&&a==0)
        cout <<"equatuon is many test ";
    else 
    {
        float D=a*e-b*d;
        if(D==0)
            cout <<"equation is 0 test ";
        else 
        {
            cout <<"x="<<(c*e-b*f)/D<<endl<<"y="<<(a*f-c*d)/D<<endl;
        }
    }    
    return 0;
}
