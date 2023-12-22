/*constructor----is a special member function, it is automatically involked
when an object is created. it's name is same as class name,but have no return
type..it has no. of arguments.
types of constructor:
1)default constructor
2)parametrized constructor
3)copy constructor*/
#include<iostream>
using namespace std;
class Sample
{
	public:
		Sample() //default
		{
			cout<<"default constructor invloked.";
		}
};
int main()
{
	Sample s;
}
