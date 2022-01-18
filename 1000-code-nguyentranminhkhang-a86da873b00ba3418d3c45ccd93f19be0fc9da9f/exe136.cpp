#include<iostream>
using namespace std;
void input_array(int arr[100],int n)
{
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
}
void thelast_evennumber(int arr[100],int n)
{
    int count=0,dem=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            count++;
        }
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]%2==0)
            dem++;
        if(dem==count)
           {
                cout<<arr[i];
                break;
           }
    }
            
}
int main(int argc, char const *argv[])
{
    int arr[100],n;
    cout<<"input n ";
    cin >>n;
    input_array(arr,n);
    thelast_evennumber(arr,n);
    return 0;
} 
