#include <iostream>
using namespace std;
void input_array(int  arr[100],int n)
{
    for(int i=0;i<n;i++)
    {
        cin >>arr[i];
    }
}
int check_number(int arr[100],int n)
{
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]%2==0&&arr[i]<2004)
            count++;
    }
        return count;
}
int main(int argc, char const *argv[])
{
    int  arr[100];
    int n;
    cout <<"input n ";
    cin >>n;
    input_array(arr,n);
    int k=check_number(arr,n);
    if(k>0)
        cout <<"have exist"<<endl;
    else 
        cout <<"no exist"<<endl;
    
    return 0;
}
