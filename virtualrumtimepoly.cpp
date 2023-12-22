//runtime polymorphism---virtualm function(function overriding)
#include<iostream>
using namespace std;
class Base
{
	public:
		void virtual display()
		{
			cout<<"\nDisplay base";
		}
		void virtual Show()
		{
			cout<<"\nShow base";
		}
};
class Derived:public Base
{
	public:
		void display()
		{
			cout<<"\nDisplay derived";
		}
		void Show()
		{
			cout<<"\nShow derived";
		}
};
int main()
{
	Base b;
	Derived d;
	Base *bptr;
	bptr=&b;
	cout<<"\nPointer points to Base:";
	bptr->display();
	bptr->Show();
	
	cout<<"\nPointer points to Derived:";
	bptr=&d;
	bptr->display();
	bptr->Show();
	 
}
