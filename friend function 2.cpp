#include<iostream>
using namespace std;
class B;               // To avoid Error when we declare friend function in class A
class A
{ int a;
public:
	void input()
	{ cout<<"Enter Number :";
	cin>>a;
	}
	friend void max(A,B);
};
class B
{ int b;
public:
	void getdata()
	{ cout<<"Enter Number:";
	cin>>b;
	}
	friend void max(A,B);
};
void max(A aa,B bb)
{  if(aa.a>bb.b)
{
cout<<"\n Max="<<aa.a;}
else
{
cout<<"\n Max="<<bb.b;}
}
int main()
{ A aa;
B bb;
aa.input();
bb.getdata();
max(aa,bb);
return 0;
}
