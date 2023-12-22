//Single Inheritance
#include<iostream>
using namespace std;
class Student //base class
{
	int roll;
	public:
		void getroll()
		{
			cout<<"Enter the roll Num.";
			cin>>roll;
		}
		void putroll()
		{
			cout<<"\n Roll No:"<<roll;
		}
};
class Test:public Student   //derived class
{
	int Sub1,Sub2;
	public:
		void getdata()
		{ cout<<"Enter the marks in Sub1 and Sub2";
		cin>>Sub1>>Sub2;
		}
		void putdata()
		{
			cout<<"\n Sub1:"<<Sub1;
			cout<<"\n Sub2:"<<Sub2;
			cout<<"\n Total is :"<< Sub1+Sub2;
		}
			
};
int main()
{   Test t;
   t.getroll();
   t.getdata();
   t.putroll();
   t.putdata();
   return 0;
}
