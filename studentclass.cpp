//array of object using class



#include<iostream>
using namespace std;
class Student
{
	int rollno,marks;
	char name[30];
	public:
		void getdata()
		{
			cout<<"enter the roll no:";
			cin>>rollno;
			cout<<"enter the name:";
			cin>>name;
			cout<<"enter the marks:";
			cin>>marks;
		}
		void putdata()
		{
			cout<<"\n---------------";
			cout<<"\nRoll no is:"<<rollno;
			cout<<"\nName is:"<<name;
			cout<<"\nMarks is:"<<marks;
		}
};
int main()
{
	int i;
	Student s[3];
	for(i=0;i<3;i++)
	{
		s[i].getdata();
	}
	for(i=0;i<3;i++)
	{
		s[i].putdata();
	}
	return 0;
}
