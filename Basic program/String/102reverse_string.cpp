// reverse string print
#include<iostream>
using namespace std;
int main()
{
    char str[15],a[15];
    int i,j,k;
    cout<<"Enter String: ";
    cin>>str;
    for(i=0; str[i] != '\0'; i++);

    k=i;
    for(j=0;j<i;j++)
    {
        a[j]=str[--k];
    }
     a[i]='\0';
    cout<<"\nReverse String: "<<a;
    return 0;
}