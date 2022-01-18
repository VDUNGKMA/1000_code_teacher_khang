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
void theposion_numberperfect(int arr[100],int n)
{
    int count=0;
    for(int i=n-1;i>=0;i--)
    {
        if(check_numberperfect(arr[i])==1)
        {
            cout<<i<<endl;
            break;
        }
        else 
        {
            count++;
            if(count==n)
                cout<<-1<<endl;
        }
    }
}
int main(int argc, char const *argv[])
{
    int arr[100],n;
    cout<<"input n ";
    cin >>n;
    input_array(arr,n);
    theposion_numberperfect(arr,n);

    return 0;
} 