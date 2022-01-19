#include<iostream>
using namespace std;
void input_array(int arr[100],int n)
{
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
}
int check_prime(int &k)
{
    int count=0;
    if(k<2)
        return 0;
    else 
    {
        for(int i=2;i<k;i++)
        {
            if(k%i==0)
                count++;
        }
        if(count==0)
            return 1;
        else 
            return 0;
    }
}
int thefirst_prime(int arr[100],int n)
{
    for(int i=0;i<n;i++)
    {
        if(check_prime(arr[i])==1)
            return i;
    }
        return 0;
}
int max_prime(int arr[100],int n)
{
    int maxprime=arr[thefirst_prime(arr,n)];
    if(thefirst_prime(arr,n)==0)
        return 0;
    else 
    {
        for(int i=0;i<n;i++)
        {
            if(check_prime(arr[i])==1&&arr[i]>maxprime)
                {
                    maxprime=arr[i];
                }
        }
            return maxprime;
    }
}
int main(int argc, char const *argv[])
{
    int arr[100],n;
    cout<<"input n ";
    cin>>n;
    input_array(arr,n);
    cout<<max_prime(arr,n);
    return 0;
}
