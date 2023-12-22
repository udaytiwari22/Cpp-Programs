//function template
/*syntax:
tempalte<class T>
T function_name(T argumnets)*/
#include<iostream>
using namespace std;
template<class T>
T large(T n1,T n2)
{
	return (n1>n2)?n1:n2;
}
int main()
{
	int i1,i2;
	float f1,f2;
	char c1,c2;
	cout<<"enter any two integers numbers:";
	cin>>i1>>i2;
	cout<<"\nLarge integers number is:"<<large(i1,i2);
	cout<<"\nenter any two decimal numbers:";
	cin>>f1>>f2;
	cout<<"\nLarge decimal number is:"<<large(f1,f2);
	cout<<"\nenter any two characters:";
	cin>>c1>>c2;
	cout<<"\nLarge ACSII value character is:"<<large(c1,c2);
}
