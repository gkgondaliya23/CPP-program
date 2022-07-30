// multiple inheritance (product)

#include<iostream>
using namespace std;

class A       //base 1 class
{
      protected:
      int a;

      public:
        void set_A()
        {
            cout<<"Enter the Value of A: ";
            cin>>a;
        }

        void disp_A()
        {
            cout<<"\nValue of A: "<<a;
        }
};

class B       //base 2 class
{
    protected:
        int b;
      
    public:
        void set_B()
        {
          cout<<"Enter the Value of B: ";
          cin>>b;
        }

    
        void disp_B()
        {
          cout<<"\nValue of B: "<<b;
        }
};

class C: public B, public A     // derived class
{
  int c,p;
  
  public:
    void set_C()
    {
        set_A();
        set_B();
        cout<<"Enter the Value of C: ";
        cin>>c;
    }
    
    void disp_C()
    {
        disp_A();
        disp_B();
        cout<<"\nValue of C: "<<c;
    }
  
      void cal_product()
      {
        p=a*b*c;
        cout<<"\nProduct of "<<a<<" * "<<b<<" * "<<c<<" = "<<p;
      }
};

int main()
{
  
  C c;
    c.set_C();
    c.disp_C();
    c.cal_product();
  
  return 0;
  
}
