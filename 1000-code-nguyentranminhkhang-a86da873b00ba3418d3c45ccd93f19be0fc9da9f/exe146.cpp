#include<iostream>
using namespace std;
void input_array(float arr[100],int n)
{
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
}
void thefirst_nagative(float arr[100],int n)
{
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]<0)
        {
            cout<<arr[i];
            break;
        }
        else 
        {
            count++;
            if(count==n)
                cout <<1;
        }
    }
            
}
int main(int argc, char const *argv[])
{
    float arr[100];
    int n;
    cout<<"input n ";
    cin >>n;
    input_array(arr,n);
    thefirst_nagative(arr,n);
    return 0;
} 
