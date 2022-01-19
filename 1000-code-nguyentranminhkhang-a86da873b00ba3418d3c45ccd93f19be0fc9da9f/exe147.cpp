#include<iostream>
using namespace std;
void input_array(int arr[100],int n)
{
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
}
void thelass_interger(int arr[100],int n)
{
    int count=0;
    for(int i=n-1;i>=0;i--)
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
    thelass_interger(arr,n);
    return 0;
} 