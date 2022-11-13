#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    unsigned int num,unit,tens;
    cout<<"\n Enter an integer number less than 100:";
    cin>>num;
    if(num<100)
    {
        unit=num%10;
        tens=(num-unit)/10;
        cout<<"\n The invert of number is:"<<unit<<tens;
    }
    else
        cout<<"\n please enter a number less than 100!!";
    getch();
    return 0;
}
