#include <iostream>
using namespace std;
void input_array(float arr[100],int n)
{
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
}
void output_array(float arr[100],int n)
{
    for(int i=0;i<n;i++)
    {
        cout <<arr[i]<<" ";
    }
}

void select_sort(float arr[100],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            if(arr[i]>arr[j])
                {
                    float c=arr[i];
                          arr[i]=arr[j];
                          arr[j]=c;
                }
        }
    }
}
int main(int argc, char const *argv[])
{
    float arr[100];
    int n;
    cout <<"input n ";
    cin >>n;
    input_array(arr,n);
    select_sort(arr,n);
    output_array(arr,n);
    return 0;
}
