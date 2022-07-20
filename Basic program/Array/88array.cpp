// sparse matrix (when enter 0 than space)
//      1   2   3
//          5   6
//      7   8
#include<iostream>
using namespace std;
int main()
{
    int a[5][5],i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<"a["<<i<<"]["<<j<<"]: ";
            cin>>a[i][j];
        }
    }
    cout<<"\n";
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(a[i][j]==0)
            {
                cout<<" \t";
            }
            else
            {
                cout<<a[i][j]<<"\t";
            }
        }
        cout<<"\n";
    }
    return 0;
}