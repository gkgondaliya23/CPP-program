/*
               * * * * * 
                * * * * 
                 * * *
                  * * 
                   *
*/
#include<iostream>
using namespace std;
int main()
{
    int i,j,sp=15;
    for(i=5;i>=1;i--)       //row
    {
        for(j=1;j<=sp;j++)  //space
        cout<<" ";
        for(j=1;j<=i;j++)   //column
        {
            cout<<"* ";  
        }
        sp++;       
        cout<<"\n";
    }
    return 0;
}