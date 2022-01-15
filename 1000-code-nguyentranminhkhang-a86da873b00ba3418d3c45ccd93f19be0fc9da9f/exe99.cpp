#include <iostream>
using namespace std;
void inputarray(float arr[3])
{
    for(int i=0;i<3;i++)
    {
        cin >>arr[i];
    }
}
void sort(float arr[3])
{
    for(int i=0;i<3;i++)
    {
        for(int j=i;j<3;j++)
        {
            if(arr[i]>arr[j])
            {
                float k=arr[i];
                arr[i]=arr[j];
                arr[j]=k;
            }
        }
    }
    
}
int main(int argc, char const *argv[])
{
    float arr[3];
    cout <<"input 3 number ";
    inputarray(arr);  
    sort(arr);
    for(int i=0;i<3;i++)
    {
        cout <<arr[i]<<"\t";
    }
    return 0;
}
