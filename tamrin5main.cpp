#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    double weight,height,bmi;
    cout<<"\n Attention!! BMI not suitable for: age less than 19, pregnant women, \nprofessional athletes with muscular bodies, people with severe diseases and organ defects.  ";
    cout<<"\n Enter your weight in kilogram:";
    cin>>weight;
    cout<<"\n\n Enter your height in meter:";
    cin>>height;
    bmi=weight/(height*height);
    if(bmi<18.5)
        cout<<"\n your BMI is: "<<bmi<<"\n your status: underweight.";
    else if(bmi>=18.5 && bmi<25.0)
        cout<<"\n your BMI is: "<<bmi<<"\n your status: normal.";
    else if(bmi>=25.0 && bmi<30.0)
        cout<<"\n your BMI is: "<<bmi<<"\n your status: overweight.";
    else
        cout<<"\n your BMI is: "<<bmi<<"\n your status: obese.";
    getch();
    return 0;
}
