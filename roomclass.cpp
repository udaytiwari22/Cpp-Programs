//classes and object
#include<iostream>
using namespace std;
class Room
{
	int len,wid;//by default ,they are private
	public:
		void getdata(int l,int b)
		{
			len=l;
			wid=b;
		}
		void putdata()
		{
			cout<<"\nLength is:"<<len;
			cout<<"\nBreadth is:"<<wid;
			cout<<"\nArea of Room is:"<<len*wid;
		}
};
int main()
{
	Room r; //r is an object
	r.getdata(12,14);
	r.putdata();
}

