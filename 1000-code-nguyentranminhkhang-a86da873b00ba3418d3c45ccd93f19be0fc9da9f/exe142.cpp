#include <iostream>
using namespace std;
void input_array(float arr[100],int n)
{
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
}
void thecount_min(float arr[100],int n)
{
    float min=arr[0];
    for(int i=0;i<n;i++)
    {
        if(min>arr[i])
            min=arr[i];
    }
    cout<<min;
}
int main(int argc, char const *argv[])
{
    float arr[100];
    int n;
    cout<<"input n ";
    cin >>n;
    input_array(arr,n);
    thecount_min(arr,n);
    
    return 0;
}
