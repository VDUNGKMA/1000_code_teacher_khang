#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n,count =0;
    cout <<"input n ";
    cin >>n;
    if(n<2)
    {
        cout <<"this is not number prime "<<endl;
    }
    else
    {
        for(int i=2;i<n;i++)
        {
            if(n%i==0)
            {
                count ++;
            }
        }
        if(count ==0)
            cout <<"this is number prime "<<endl;
        else 
            cout <<"this is not number prime "<<endl;    
    }
    return 0;
}
