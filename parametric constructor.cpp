#include<iostream>
using namespace std;
class Room
{
	int len,wid;
	public:
		Room(int x,int y) // PARAMETRIC CONSTRUCTOR
		{
			len=x;
			wid=y;
		}
		void display()  //normal function
		{
			cout<<"Length is :"<<len;
			cout<<"\n Width is :"<<wid;
			cout<<"\n Area is :"<< len*wid;
		}
};
int main()
{
  Room r(78,12);
  r.display();
  
  return 0;
}
