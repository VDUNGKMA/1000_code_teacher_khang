#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
   int m,n;
   cout <<"input m ,n ";
   cin >>m>>n;
   for(int i=0;i<n;i++)
   {
       for(int j=0;j<m;j++)
       {
           cout <<"* ";
       }
        cout <<"\n";
   }
    cout <<"\n";
   for(int i=0;i<n;i++)
   {
       for(int j=0;j<m;j++)
       {
           if(i==0||i==n-1||j==0||j==m-1)
                cout <<"* ";
            else    
                cout <<"  ";
       }
        cout <<"\n";
   }
    return 0;
}
