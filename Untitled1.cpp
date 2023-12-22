//destructor---to destroyed an object 
#include<iostream>
using namespace std;
class sample
{
	int i,j;
	public:
		sample(int a,int b)  //constructor
		{ 
		i=a;
		j=b;
		}
		~sample()  //destructor
		{
			cout<<"Destructor at work\n";
		}
};
int main()
{ sample s1(3,4);
}

