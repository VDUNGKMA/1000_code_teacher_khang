#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int month;
    cout <<"input month ";
    cin >>month;
    switch (month)
    {
        case 1:
        case 2:
        case 3:
            cout <<"the month is aquater 1"<<endl;        
            break;
        case 4:
        case 5:
        case 6:
            cout <<"the month is aquater 2"<<endl;        
            break;
        case 7:
        case 8:
        case 9:
            cout <<"the month is aquater 3"<<endl;        
            break;
        case 10:
        case 11:
        case 12:
            cout <<"the month is aquater 4"<<endl;        
            break;
        default :
            cout <<"the month is unidentify"<<endl;
    }
    return 0;
}
