#include<iostream>
using namespace std;
class xyz
{
	int a,b;
	public:
		void getdata()
		{ cout<<"Enter two numbers\n";
		cin>>a>>b;
		}
		void putdata()
		{
			cout<<"\n a="<<a<<"\t b="<<b;
		}
};
int main()
{ xyz aa[5];
int i;
for(i=0;i<5;i++)
 {
 aa[i].getdata();
}
for(i=0;i<5;i++)
{
 aa[i].putdata();
}
return 0;
}
