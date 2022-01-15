#include <iostream>
using namespace std;
void isosceles_triangle(int h)
{
    int dem=0,k;
    k=h;
    while(k>0)
    {
        for(int i=0;i<k-1;i++)
        {
            cout<<"  ";
        }
        for(int j=0;j<=dem;j++)
        {
            cout<<"* ";
        }
        k--;
        dem+=2;
        cout<<"\n";
    }
}
void empty_isosceles_triangle(int h)
{
     int m = h-1, n = h-1;
   for (int i = 0; i < h; i++)
   {
      for (int j = 0; j < 2 * h - 1; j++)
      {
         if (j == m || j == n || i== h-1)
            printf("* ");
         else
            printf("  ");
      }
      m--;
      n++;
      printf("\n");
   }
}
void isosceles_right_triangle(int h)
{
    
    for(int i=0;i<h;i++)
    {
        for(int j=0;j<i;j++)
        {
            cout <<"* ";
        }
        cout <<"\n";
    }
        cout <<"\n";
}
void empy_isosceles_right_triangle(int h)
{
    for(int i=0;i<h;i++)
    {
        for(int j=0;j<=i;j++)
        {
            if(j==0||j==i||i==h-1)
            {
                cout <<"* ";
            }
            else 
                cout <<"  ";
        }
        cout <<"\n";
    }
}
int main(int argc, char const *argv[])
{
    int h;
    cout<<"input h ";
    cin >>h;
    isosceles_triangle(h);
    empty_isosceles_triangle(h);
    isosceles_right_triangle(h);
    empy_isosceles_right_triangle(h);
    return 0;
}
