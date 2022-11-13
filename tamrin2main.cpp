#include <iostream>
#include <conio.h>
using namespace std;
long int gross_pay (long int hours,long int rate);
long int net_pay(long int gross);
int main()
{
    long int hours,rate,gross,net;
    cout<<"\n Enter the hours of work in a week:";
    cin>>hours;
    cout<<"\n Enter the rate in hours:";
    cin>>rate;
    gross=gross_pay(hours,rate);
    net=net_pay(gross);
    cout<<"\n your gross pay in a week is:"<<gross;
    cout<<"\n your net pay in a week is:"<<net;
    getch();
    return 0;
}
long int gross_pay(long int hours,long int rate)
{
    if(hours>40)
        return (rate*40)+((hours-40)*rate*1.5);
    else
        return hours*rate;
}
long int net_pay(long int gross)
{
    if(gross>10000000)
        return gross-1500000;
    else
        return gross;
}