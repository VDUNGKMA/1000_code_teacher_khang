#include <iostream>
using namespace std;
void input_array(int arr[100],int n)
{
    for(int i=0;i<n;i++)
    {
        cin >>arr[i];
    }
}
int  min_arrray(int arr[100],int n)
{
    int min=arr[0];
    for(int i=0;i<n;i++)
    {
        if(min>arr[i])
            min=arr[i];
    }
        return min;
}
void find_possion_min(int arr[100],int n)
{
    int k=min_arrray(arr,n);
    for(int i=0;i<n;i++)
    {
        if(arr[i]==k)
            cout <<i<<" ";
    }
}
int main(int argc, char const *argv[])
{
    int arr[100];
    int n;
    cout <<"input n ";
    cin >>n;
    input_array(arr,n);
    cout <<"the location with a value min: ";
    find_possion_min(arr,n);
    
    return 0;
}

