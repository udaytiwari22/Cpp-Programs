//Multiple inheritance
#include<iostream>
using namespace std;
class A
{
	protected:
		int a;
	public:
		void geta()
		{
			cout<<"enter the value of a:";
			cin>>a;
		}
		void puta()
		{
			cout<<"\nValue of a is:"<<a;
		}
};
class B
{
	protected:
		int b;
	public:
		void getb()
		{
			cout<<"enter the value of b:";
			cin>>b;
		}
		void putb()
		{
			cout<<"\nValue of b is:"<<b;
		}
};
class C:public A,public B
{
	protected:
		int c;
	public:
		void getc()
		{
			geta();
			getb();
			c=a*b;
		}
		void putc()
		{
			cout<<"\nMultiplication of a & b is:"<<c;
		}
};
int main()
{
	C c1;
	c1.getc();
	c1.puta();
	c1.putb();
	c1.putc();
}
