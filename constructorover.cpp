//constructor overloading:

#include<iostream>
using namespace std;
class Room
{
	int l,b,h;
	public:
		Room() //default
		{
			l=b=h=0;
		}
		Room(int x)  //parametric
		{
			l=b=h=x;
		}
		Room(int x,int y)  //parametric
		{
			l=b=x;
			h=y;
		}
		Room(int x,int y,int z)  //parametric
		{
			l=x;
			b=y;
			h=z;
		}
		void display()
		{
			cout<<"\n------------";
			cout<<"\nLength is:"<<l;
			cout<<"\nbreadth is:"<<b;
			cout<<"\nHeight is:"<<h;
			cout<<"\nArea of a Room is:"<<l*b*h;
		}
};
int main()
{
	Room r;
	Room r1(12);
	Room r2(10,14);
	Room r3(10,14,12);
	r.display();
	r1.display();
	r2.display();
	r3.display();
	
	return 0;
}
