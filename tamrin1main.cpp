#include <iostream>
#include <conio.h>
#include <string>
using namespace std;
int main()
{
    string words,word1,word2,word3,word4;
    cout<<"\n enter 4 word that between them there are * like: one*two*three*four :";
    cin>>words;
    word1=words.substr(0,words.find("*"));
    words.erase(0,words.find("*")+1);

    word2=words.substr(0,words.find("*"));
    words.erase(0,words.find("*")+1);

    word3=words.substr(0,words.find("*"));
    words.erase(0,words.find("*")+1);

    word4=words;

    cout<<word1<<endl<<word2<<endl<<word3<<endl<<word4<<endl;
    cout<<"---------------"<<endl;
    cout<<word4<<endl<<word3<<endl<<word2<<endl<<word1<<endl;
    getch();
    return 0;
}
