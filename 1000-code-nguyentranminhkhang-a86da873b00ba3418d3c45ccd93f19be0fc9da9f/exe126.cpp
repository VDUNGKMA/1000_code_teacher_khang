#include <iostream>
using namespace std;
void input_array(float arr[100],int n)
{
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
}
void output_array(float arr[100],int n)
{
    float s=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]<0)
            s+=arr[i];
    }
    cout<<s<<endl;
}
int main(int argc, char const *argv[])
{
    float arr[100];
    int n;
    cout <<"input n ";
    cin>>n;
    input_array(arr,n);
    output_array(arr,n);
    
    return 0;
}
