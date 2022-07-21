// class introduction
#include<iostream>
using namespace std;
class student
{
    public:
    int id;
    string name;
};
int main()
{
    student s1,s2;
    s1.id = 1;
    s1.name = "Rohan";
    s2.id = 2;
    s2.name = "Mohan";
    cout<<s1.id<<"\t"<<s1.name;
    cout<<"\n"<<s2.id<<"\t"<<s2.name;
    return 0;
}