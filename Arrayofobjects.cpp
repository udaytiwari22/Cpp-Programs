#include<iostream>
using namespace std;
class Employee
{
	char name[30],post[30];
	int emp_id, sal;
	public:
		void getdata()
	{
	cout<<"Enter Employee Name\n";
		cin>>name;
		cout<<"Enter Employee post\n";
		cin>>post;
		cout<<"Enter Employee id\n";
		cin>>emp_id;
		cout<<"Enter the Salary of the Employee\n";
		cin>>sal;}
		
		 void display()
  {
  	cout<<"\n..........Employee Details";
  	cout<<"\n Employee name is "<<name;
  	cout<<"\n Employee post is "<<post;
  	cout<<"\n Employee id is"<<emp_id;
  	cout<<"\n Employee salary is "<<sal;
  		
  }
};
int main()
{
	int i;
	Employee ee[3];
	for(i=0;i<3;i++)
	{ ee[i].getdata();
	}
	
	for(i=0;i<3;i++)
	{ ee[i].display();
	}
	return 0;
		
}

