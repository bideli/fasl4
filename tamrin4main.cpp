#include <iostream>
#include <conio.h>
using namespace std;
int month_to_day,year,leapyear;
int days(int day, int month);
bool leap(int);
int main()
{
    int day, month,daypass;
    cout<<"\n Attention!! enter AD date:";
    cout<<"\n enter day:";
    cin>>day;
    cout<<"\n enter month:";
    cin>>month;
    cout<<"\n enter year:";
    cin>>year;
    daypass= days(day,month);
    cout<<"\n The day pass is: "<<daypass<<" days.";
    leapyear= leap(year);
    if (leapyear==0)
            cout<<"\n this year is not leap year.";
    else
            cout<<"\n this year is leap year.";
    getch();
    return 0;
}
int days(int day, int month)
{
    switch (month) {
        case 1:
            month_to_day=0;
            break;
        case 2:
            month_to_day=31;
            break;
        case 3:
            month_to_day=31+28;
            break;
        case 4:
            month_to_day=31+28+31;
            break;
        case 5:
            month_to_day=31+28+31+30;
            break;
        case 6:
            month_to_day=31+28+31+30+31;
            break;
        case 7:
            month_to_day=31+28+31+30+31+30;
            break;
        case 8:
            month_to_day=31+28+31+30+31+30+31;
            break;
        case 9:
            month_to_day=31+28+31+30+31+30+31+31;
            break;
        case 10:
            month_to_day=31+28+31+30+31+30+31+31+30;
            break;
        case 11:
            month_to_day=31+28+31+30+31+30+31+31+30+31;
            break;
        default:
            month_to_day=31+28+31+30+31+30+31+31+30+31+30;
    }
    return month_to_day+day;
}
bool leap(int)
{
    if(year%100==0)
        if (year%400==0)
            leapyear= true;
        else
            leapyear= false;
    else
        if (year%4==0)
            leapyear= true;
        else
            leapyear= false;
    return leapyear;
}