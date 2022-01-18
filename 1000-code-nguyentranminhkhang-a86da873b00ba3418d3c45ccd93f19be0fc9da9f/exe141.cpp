#include <iostream>
using namespace std;
void input_array(float arr[100],int n)
{
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
}
int output_min_array(float arr[100],float brr[100],int n)
{
    int count=0,j=0;
    for(int i=0;i<n;i++)
    {
         if(arr[i]>0)
        {
            brr[j]=arr[i];
            j++;
        }
        else if(arr[i]<0)
        {
            count++;
            if(count==n)
                j=-1;
        }
    }
        return j;
}
float output(float arr[100],float brr[100],int n)
{
    int j=output_min_array(arr,brr,n);
        float min=brr[0];
        for(int i=0;i<j;i++)
        {
            if(min>brr[i])
                min=brr[i];
        }
            return min;
}
void theposion_valuemin(float arr[100],float brr[100],int n)
{
    int j=output_min_array(arr,brr,n);
    if(j==-1)
        cout<<-1;
    else 
    {
        for(int i=0;i<n;i++)
        {
            if(arr[i]==output(arr,brr,n))
                cout<<i<<" ";
        }
    }
}
int main(int argc, char const *argv[])
{
    float arr[100],brr[100];
    int n;
    cout<<"input n ";
    cin >>n;
    input_array(arr,n);
    theposion_valuemin(arr,brr,n);
    
    return 0;
}
