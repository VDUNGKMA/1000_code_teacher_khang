#include<iostream>
using namespace std;
void input_array(float arr[100],int n)
{
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
}
int find_firstnegative(float arr[100],int n)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]<0)
         {
             return i;
             break;
         }
    }
        return 0;
}
float negative_max(float arr[100],int n)
{
    float max=arr[find_firstnegative(arr,n)];
    if(find_firstnegative(arr,n)==0)
        return 0;
    else
    {
        for(int i=0;i<n;i++)
        {
            if(arr[i]<0&&arr[i]>max)
                max=arr[i];
        }
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
    cout<<negative_max(arr,n);
    
    return 0;
} 
