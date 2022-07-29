// copy constructor
#include<iostream>
using namespace std;
class findage
{
    int age;
    public:
    findage(int n)//constructor
    {
        age=n;
        cout<<"\n Age : "<<age;
    }  
    findage(findage &new_age)//copy constructor
    {
        age=new_age.age;
        cout<<"\n Age : "<<age;
    }  
};
int main()
{
    findage obj1(10);
    findage obj2(obj1);     // object as argument
    return 0;
}
