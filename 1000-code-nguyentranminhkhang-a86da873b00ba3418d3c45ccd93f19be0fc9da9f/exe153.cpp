#include <iostream>
using namespace std;
void input_array(int arr[100],int n)
{
    for(int i=0;i<n;i++)
    {
        cin >>arr[i];
    }
}
int even_number(int arr[100],int n)
{
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]%2==0)
            {
                count=arr[i];
                return count;
            }
    }
        return -1;
}
void even_number_min(int arr[100],int n)
{
    int k=even_number(arr,n);
    if(k==-1)
        cout <<k<<endl;
    else 
    {
        for(int i=0;i<n;i++)
        {
            if(arr[i]%2==0&&arr[i]<k)
                k=arr[i];
        }
            cout<<k<<endl;
    }
}
int main(int argc, char const *argv[])
{
    int arr[100],n;
    cout<<"input n ";
    cin >>n;
    input_array(arr,n);
    even_number_min(arr,n);
    return 0;
}
