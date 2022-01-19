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
void find_prime_first(int arr[100],int n)
{
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(check_prime(arr[i])==1)
            {
                cout<<arr[i];
                break;
            }
        else 
        {
            count++;
            if(count==n)
                cout<<-1;
        }
    }
}
int main(int argc, char const *argv[])
{
    int arr[100],n;
    cout<<"input n ";
    cin>>n;
    input_array(arr,n);
    find_prime_first(arr,n);
    return 0;
}
