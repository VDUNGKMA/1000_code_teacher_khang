#include<iostream>
using namespace std;
void input_array(int arr[100],int n)
{
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
}
void output_array(int arr[100],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }
}
int main(int argc, char const *argv[])
{
    int arr[100];
    int n;
    cout <<"input n ";
    cin >>n;
    input_array(arr,n);
    output_array(arr,n);
    return 0;
}
