#include <iostream>
#include <conio.h>
using namespace std;
char enter,button;
char phone(char);
int main()
{
    cout<<"\n Enter a letter:";
    cin>>enter;
    cout<<"\n you pressed button "<<phone(enter);
    getch();
    return 0;
}
char phone(char)
{
    switch (enter) {
        case '1':
            button='1';
            break;
        case '2':
        case 'a':
        case 'A':
        case 'b':
        case 'B':
        case 'c':
        case 'C':
            button='2';
            break;
        case '3':
        case 'D':
        case 'd':
        case 'E':
        case 'e':
        case 'F':
        case 'f':
            button='3';
            break;
        case '4':
        case 'G':
        case 'g':
        case 'H':
        case 'h':
        case 'I':
        case 'i':
            button='4';
            break;
        case '5':
        case 'J':
        case 'j':
        case 'K':
        case 'k':
        case 'L':
        case 'l':
            button='5';
            break;
        case '6':
        case 'M':
        case 'm':
        case 'N':
        case 'n':
        case 'O':
        case 'o':
            button='6';
            break;
        case '7':
        case 'P':
        case 'p':
        case 'Q':
        case 'q':
        case 'R':
        case 'r':
        case 'S':
        case 's':
            button='7';
            break;
        case '8':
        case 'T':
        case 't':
        case 'U':
        case 'u':
        case 'V':
        case 'v':
            button='8';
            break;
        case '9':
        case 'W':
        case 'w':
        case 'X':
        case 'x':
        case 'Y':
        case 'y':
        case 'Z':
        case 'z':
            button='9';
            break;
        case '0':
            button='0';
            break;
        case '*':
            button='*';
            break;
        case '#':
            button='#';
            break;
        default:
            cout<<"\n unavailable button!";
    }
    return button;
}