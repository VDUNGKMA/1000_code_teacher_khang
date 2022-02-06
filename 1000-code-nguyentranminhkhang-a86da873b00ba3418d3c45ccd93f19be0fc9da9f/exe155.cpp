#include <iostream>
using namespace std;
#include <math.h>
void input_array(float arr[100],int n)
{
    for(int i=0;i<n;i++)
    {
        cin >>arr[i];
    }
}
void the_distance(float arr[100],float brr[100],int n,float x )
{
    
    for(int i=0;i<n;i++)
    {
        brr[i]=fabs(arr[i]-x);
    }
}
float the_distance_max(float brr[100],int n )
{
    float max=brr[0];
    for(int i=0;i<n;i++)
    {
        if(brr[i]>max)
            max=brr[i];
    }
        return max;
}
void max_value(float arr[100],float brr[100],int n,float x)
{
    for(int i=0;i<n;i++)
    {
        if(brr[i]==the_distance_max(brr,n))
            cout<<arr[i]<<" "<<endl;
    }
}
int main(int argc, char const *argv[])
{
    float  arr[100],brr[100],x;
    int n;
    cout<< "input n,x ";
    cin >>n>>x; 
    input_array(arr,n);
    the_distance(arr,brr,n,x);
    max_value(arr,brr,n,x);
    return 0;
}
