#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	char c,fname[10];
	cout<<"Enter file name";
	cin>>fname;
	ifstream in (fname);
	if(!in)
	{ cout<<"File not Exist";
	exit(0);
	}
	cout<<"\n\n";
	while(in.eof()==0)
	{
		in.get(c);
		cout<<c;
	}
}
