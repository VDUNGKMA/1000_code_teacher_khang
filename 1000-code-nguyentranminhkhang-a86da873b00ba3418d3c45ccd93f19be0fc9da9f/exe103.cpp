
#include<iostream>
using namespace std;
#include<math.h>

int main(int argc, char const *argv[])
{
    int day, month, year, tg, day1, month1, year1;
    cout<<"input day: "; cin>>day; day1=day;
    cout<<"input month: "; cin>>month; month1=month;
    cout<<"input year: "; cin>>year; year1=year;
    switch(month)
    {
        case 4:
        case 6:
        case 9:
        case 11:
            tg = 30;
            break;
        case 2:
            tg = 28 + ((year%4==0 && year%100) || (year%400==0));
            break;
        default:
            tg = 31;
    }

    if(day1==1)
    {
        switch(month1-1)
        {
            case 4:
            case 6:
            case 9:
            case 11:
                day1=30;
                break;
            case 2:
                day1=28+((year1%4==0 && year1%100) || (year1%400==0));
                break;
            default:
                day1=31;
        }
        if(month1==1)
        {
            month1=12;
            year1--;
        }
        else
        {
            month1--;
        }
    }
    else
    {
        day1--;
    }

    cout<<"Yesterday: "<<day1<<"/"<<month1<<"/"<<year1;

    cout<<endl;
    return 0;
}