
#include<iostream>
using namespace std;

int main()
{
    int day, month, year, s, i;
    cout<<"Nhap vao ngay: "; cin>>day;
    cout<<"Nhap vao thang: "; cin>>month;
    cout<<"Nhap vao nam: "; cin>>year;

    s = day; 
    for(i=1;i<month;i++)
    {
        switch(i)
        {
            case 4:
            case 6:
            case 9:
            case 11:
                s+=30;
                break;
            case 2:
                s+=28+((year%4==0 && year%100) || (year%400==0));
                break;
            default:
                s+=31;
        }
    }

    cout <<s<<endl;
        return 0;
}