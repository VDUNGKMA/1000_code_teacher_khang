#include<iostream>
using namespace std;
void input_array(int arr[100],int n)
{
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
}
int thecount_min(int arr[100],int n)
{
    int min=arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i]<min)
        {
           min=arr[i];
        }
    }
        return min;   
}
void theposion_min(int arr[100],int n)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==thecount_min(arr,n))
            cout<<i<<" ";
    }
}
int main(int argc, char const *argv[])
{
    int arr[100],n;
    cout<<"input n ";
    cin >>n;
    input_array(arr,n);
    theposion_min(arr,n);
    return 0;
} 