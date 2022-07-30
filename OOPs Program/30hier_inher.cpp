// Hierarchical Inheritance
#include <iostream>
using namespace std;

class person
{
protected:
    int age;
    char name[100],gen[50];

public:
    void set_p()
    {
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Age: ";
        cin >> age;
        cout << "Enter Gender: ";
        cin >> gen;
    }
    void dis_p()
    {
        cout << "\nYour Name: " << name;
        cout << "\nYour Age: " << age;
        cout << "\nYour Gender: " << gen;
    }
};
class student : public person
{
protected:
    int std;
    char school[100];

public:
    void set_s()
    {
        set_p();
        cout << "Enter School: ";
        cin >> school;
        cout << "Enter Standard: ";
        cin >> std;
    }
    void dis_s()
    {
        dis_p();
        cout << "\nYour School Name: " << school;
        cout << "\nYour Standard: " << std;
    }
};
class emplyoee : public person
{
protected:
    int salary;
    char compny[100];

public:
    void set_e()
    {
        set_p();
        cout << "Enter Compny: ";
        cin >> compny;
        cout << "Enter Salary: ";
        cin >> salary;
    }
    void dis_e()
    {
        dis_p();
        cout << "\nYour School Name: " << compny;
        cout << "\nYour Standard: " << salary;
    }
};
int main()
{
    student s[5];
    emplyoee e[5];
    int i;
    for(i=0;i<2;i++)
        s[i].set_s();
    cout<<"\n";
    for(i=0;i<2;i++)
        e[i].set_e();
    cout<<"\n";
    for(i=0;i<2;i++)
        s[i].dis_s();
    cout<<"\n";
    for(i=0;i<2;i++)
        e[i].dis_e();
}