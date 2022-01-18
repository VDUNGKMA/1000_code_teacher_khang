#include <iostream>
using namespace std;
void input_array(int  arr[100],int n)
{
    for(int i=0;i<n;i++)
    {
        cin >>arr[i];
    }
}
int checknguyento(int &k)
{
    int dem=0;
    if(k<2)
        return 0;
    else 
        {
            for(int i=2;i<k;i++)
            {
                if(k%i==0)
                    dem++;
            }
            if(dem==0)
                return 1;
            else 
                return 0;
        }
}
void the_count(int arr[100],int n)
{
    int count =0;
    for(int i=0;i<n;i++)
    {
        if(checknguyento(arr[i])==1&&arr[i]<100)
            {
                count++;
            }
    }
        cout<<"the count = "<<count<<endl;
}
int main(int argc, char const *argv[])
{
    int  arr[100];
    int n;
    cout <<"input n ";
    cin >>n;
    input_array(arr,n);
    the_count(arr,n);
    
    return 0;
}
