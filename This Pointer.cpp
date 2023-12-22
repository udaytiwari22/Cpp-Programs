//This Pointer 
#include<iostream>
using namespace std;
class abc
{ int id;
public:
	void getdata(int id)
	{ this->id=id;
	}
	void display()
	{ cout<<"\n Id is :"<<id;
	}
};
int main()
{ abc a;
a.getdata(23);
a.display();
}
