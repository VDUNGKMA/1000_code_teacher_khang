#include <iostream>
using namespace std;
void input_array(float arr[100],int n)
{
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
}
float output_max_array(float arr[100],int n)
{
    float max=arr[0];
    for(int i=0;i<n;i++)
    {
        if(max<arr[i])
            max=arr[i];
    }
        return max;
}
int main(int argc, char const *argv[])
{
    float arr[100];
    int n;
    cout<<"input n ";
    cin >>n;
    input_array(arr,n);
    cout<<output_max_array(arr,n);
    
    return 0;
}
