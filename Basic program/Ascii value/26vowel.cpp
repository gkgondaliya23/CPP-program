// vowel (a,e,i,o,u) or consonant
#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"Enter ch: ";
    cin>>ch;

    if(ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U' || ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
    {
        cout<<"vowel";
    }
    else
    {
        cout<<"consonant";
    }
    return 0;
} 