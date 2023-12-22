//class template
/*syntax:
template<class T>
class class-name
{
	public:
	T variables;
	T some_function(T arguments);
};
*/
#include<iostream>
using namespace std;
template<class T>
class Calculator
{
	private:
		T num1,num2;
	public:
		Calculator(T n1,T n2)
		{
			num1=n1;
			num2=n2;
		}
		void display()
		{
			cout<<"\n------------------";
			cout<<"\nNumbers are:"<<num1<<" and "<<num2;
			cout<<"\nAddition is:"<<add();
			cout<<"\nSubtraction is:"<<sub();
			cout<<"\nMultiplication is:"<<mul();
			cout<<"\nDivision is:"<<div();
		}
		T add()
		{
			return (num1+num2);
		}
		T sub()
		{
			return (num1-num2);
		}
		T mul()
		{
			return (num1*num2);
		}
		T div()
		{
			return (num1/num2);
		}
};
int main()
{
	Calculator<int> intcal(8,6);
	Calculator<float> floatcal(6.5,4.2);
	cout<<"\ninteger result is:";
	intcal.display();
	cout<<"\nFloat result is:";
	floatcal.display();
}
