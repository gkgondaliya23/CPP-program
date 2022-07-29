//simple inheritance 
#include<iostream>
using namespace std;
class Person        //base class
{
    int id;
    char name[100];
    public:
    void set_p()
    {
        cout<<"Enter your id: ";
        cin>>id;
        cout<<"Enter your name: ";
        cin>>name;
    }
    void display_p()
    {
        cout<<"\n"<<id<<"\t"<<name;
    }
};
class skill : public Person     // derived class
{
    int fees;
    char course[100];
    public: 
    void set_s()
    {
        set_p();
        cout<<"Enter your course: ";
        cin>>course;
        cout<<"Enter course fees: ";
        cin>>fees;
    }
    void display_s()
    {
        display_p();
        cout<<"\t"<<course<<"\t"<<fees;
    }
};
int main()
{
    skill s;
    s.set_s();
    s.display_s();
    return 0;
}