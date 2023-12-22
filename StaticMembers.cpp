#include<iostream>
using namespace std;

class Employee
{
   int id;
   static int count;
   public:
    
    void setdata(void)
    {
        cout<<"Enter the Id of Employee"<<endl;
        cin>>id;
        count++;
    }
    void getdata(void)
    {
        cout<<" The Id of this Employee is "<<id<<" and this is employee number "<<count<<endl;
    }
    static void getcount(void)
    {
       // cout<<id (It will throw Error because id is not static data member
        cout<<"The value of count is "<<count<<endl;
    }
};
 int Employee::count;     // Static Data member is defined outside the class, default value = 0

int main()
{
    Employee s,a,c;
    
    s.setdata();
    s.getdata();
    s.getcount();
  
    a.setdata();
    a.getdata();
    a.getcount();

    c.setdata();
    c.getdata();
    c.getcount();

    return 0;
}