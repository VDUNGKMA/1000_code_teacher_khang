#include<iostream>
using namespace std;
void input_array(int arr[100],int n)
{
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
}
int check_numberperfect(int &k)
{
    int s=0;
    for(int i=1;i<k;i++)
    {
        if(k%i==0)
            s+=i;
    }
    if(s==k)
        return 1;
    else 
        return 0;
}
int theposion_numberperpect(int arr[100],int n)
{
    for(int i=0;i<n;i++)
    {
        if(check_numberperfect(arr[i])==1)
            return i;
    }
        return 0;
}
int thelast_numberperfect(int arr[100],int n)
{
    int min=arr[theposion_numberperpect(arr,n)];
    if(theposion_numberperpect(arr,n)==0)
        return 0;
    for(int i=0;i<n;i++)
    {
        if(check_numberperfect(arr[i])==1&&arr[i]<min)
        {
            min=arr[i];
        }
    }
        return min;
}
int main(int argc, char const *argv[])
{
    int arr[100],n;
    cout<<"input n ";
    cin >>n;
    input_array(arr,n);
    cout<<thelast_numberperfect(arr,n);

    return 0;
} 