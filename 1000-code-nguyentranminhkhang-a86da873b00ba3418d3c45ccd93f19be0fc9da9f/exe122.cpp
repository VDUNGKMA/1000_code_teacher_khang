#include <iostream>
using namespace std;
void input_array(float arr[100],int n)
{
    for(int i=0;i<n;i++)
    {
        cin >>arr[i];
    }
}
float max_arrray(float arr[100],int n)
{
    float max=arr[0];
    for(int i=0;i<n;i++)
    {
        if(max<arr[i])
            max=arr[i];
    }
        return max;
}
int main(int argc, char const *argv[])
{
    float arr[100];
    int n;
    cout <<"input n ";
    cin >>n;
    input_array(arr,n);
    cout <<"the count max array :"<<max_arrray(arr,n)<<endl;
    
    return 0;
}
