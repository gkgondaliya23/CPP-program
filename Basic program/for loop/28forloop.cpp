// for loop 1 2 3 .... 10
#include<iostream>
using namespace std;
int main()
{
    int i;
    for(i=1;i<=10;i++)
    {
        cout<<" "<<i;
    }
    cout<<"\ni: "<<i;
    return 0;
}


/*
i = 1       1<=10   T {}    i=2
            2<=10   T       3
            10<=10   T       11
            11<=10  F   exit loop










*/