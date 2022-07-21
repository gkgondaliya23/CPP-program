// students result detail using class
#include<iostream>
using namespace std;
class student
{
    float total,m,s,e,per;
    public: 

        void setdata()     // set value for marks
        {
            cout<<"Enter Maths Marks: ";
            cin>>m;
            cout<<"Enter Science Marks: ";
            cin>>s;
            cout<<"Enter English Marks: ";
            cin>>e;
        }
        void calculation()               // calculation of result
        {
            total = m + s + e;
            per = total / 3;
        }
        int result()             // grade system
        {
            cout<<"\n Maths: "<<m; 
            cout<<"\n science: "<<s; 
            cout<<"\n English: "<<e; 
            cout<<"\n Total Marks: "<<total; 
            cout<<"\n Percentage: "<<per; 

            if(per<33 || m<33 || s<33 || e<33)
                cout<<"\n Fail";
            else if(33<=per && 50> per)
                cout<<"\n Grade D";
            else if(50<=per && 65> per)
                cout<<"\n Grade C";
            else if(65<=per && 80> per)
                cout<<"\n Grade B";
            else if(80<=per)
                cout<<"\n Grade A";
            
        }
};

int main()
{
    float maths,sci,eng;
    student st;
    st.setdata();  
    st.calculation();
    st.result();
}