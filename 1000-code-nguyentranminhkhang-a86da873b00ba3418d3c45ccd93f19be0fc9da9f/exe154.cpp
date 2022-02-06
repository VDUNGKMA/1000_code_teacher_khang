#include <iostream>
using namespace std;
void input_array(int arr[100],int n)
{
    for(int i=0;i<n;i++)
    {
        cin >>arr[i];
    }
}
int the_first_negative(int arr[100],int n)
{
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]<0)
            {
                count=arr[i];
                return count;
            }
    }
        return -1;
}
void the_posion_maxnegative(int arr[100],int n)
{
    int k=the_first_negative(arr,n);
    if(k==-1)
        cout<<k<<endl;
    else 
    {
        for(int i=0;i<n;i++)
        {
            if(arr[i]<0&&arr[i]>k)
            {
                k=arr[i];
            }
        }
            for(int i=0;i<n;i++)
            {
                if(arr[i]==k)
                    cout<<i<<endl;
            }
    }
}
int main(int argc, char const *argv[])
{
    int arr[100],n;
    cout<< "input n ";
    cin >>n; 
    input_array(arr,n);
    the_posion_maxnegative(arr,n);
    return 0;
}
