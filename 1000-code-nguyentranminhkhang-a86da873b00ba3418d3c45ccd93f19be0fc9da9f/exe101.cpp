 
#include<iostream>
using namespace std;
 
bool isCheck(int year) {
    return ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0);
}
 
int fun(int month, int year) {
    switch (month)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        return 31;
    case 4:
    case 6:
    case 9:
    case 11:
        return 30;
    case 2:
        if (isCheck(year))
            return 29;
        else
            return 28;
    default:
        cout << "the month unindentify "<<endl;
        exit(0);
    }
}
 
int main(int argc, char const *argv[])
{
    int month, year;
    do {
        cout << "input month: ";
        cin >> month;
        cout << "input year: ";
        cin >> year;
    } while (year < 0 || year < 1 || month >12);
    cout << "the month have : " << fun(month,year) <<"day"<< endl;
    return 0;
}