#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char const *argv[])
{
    float a,b,c,k;
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
        {
           if(-c/b>0||-c/b==0)
           {
                cout <<"t= "<<-sqrt(-c/b)<<endl;
                cout <<"t= "<<sqrt(-c/b)<<endl;
           }
           else 
                cout <<"equation is 0 test"<<endl;
        }
    }
    else 
    {
        float delta=b*b-4*a*c;
        if(delta<0)
            cout <<"equation is 0 test "<<endl;
        else if(delta==0)
            {
                if(-b/(2*a)>0)
                     cout <<"t"<<-sqrt(b/(2*a))<<endl<<"t"<<sqrt(b/(2*a))<<endl;
                else    
                     cout <<"equation is 0 test"<<endl;
            }
        else    
        {
            float k=(-b-sqrt(delta))/(2*a);
            float g=(-b+sqrt(delta))/(2*a);
            if(k>0)
            {
                cout<<"t= "<<sqrt(k)<<endl<<"t= "<<-sqrt(k)<<endl;
            }
            if(g>0)
            {
                 cout<<"t= "<<sqrt(g)<<endl<<"t= "<<-sqrt(g)<<endl;
            }
        }
    }   
    return 0;
}
