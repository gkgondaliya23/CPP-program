// skill + qode = skillqode
#include<iostream>
using namespace std;
int main()
{
    char a[15],b[15];
    int i,j;
	cout<<"Enter String:";
    	cin>>a;
    cout<<"Enter String: ";
    cin>>b;
    cout<<"\nString : "<<a;
    cout<<"\nString : "<<b;

    for(i=0; a[i] != '\0'; i++);
    for(j=0; b[j] != '\0'; j++)
    {
        a[i] = b[j];
        i++;
    }
    a[i] = '\0';
   cout<<"\nString : "<<a;
    return 0;
}