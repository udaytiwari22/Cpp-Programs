#include<iostream>
using namespace std;
class code
{
	int id;
	public:
		code() //default
		{
			
		}
		code(int x) //parametric
		{
			id=x;
		}
		code(code &x) //copy constr
		{
			id=x.id;
		}
		void display()
		{
			 cout<<"\n id is : "<<id;
		}
};
int main()
{
	code A(100);
	code B(A);
	code C=A;
	code D;
	D=A;
	A.display();
	B.display();
	C.display();
	D.display();
	return 0;
}
