#include<iostream>
using namespace std;
void input_array(int arr[100],int n)
{
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
}
void thefirst_positive(int arr[100],int n)
{
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>0)
        {
            cout<<arr[i];
            break;
        }
        else 
        {
            count++;
            if(count==n)
                cout <<-1;
        }
    }
            
}
int main(int argc, char const *argv[])
{
    int arr[100],n;
    cout<<"input n ";
    cin >>n;
    input_array(arr,n);
    thefirst_positive(arr,n);
    return 0;
} 