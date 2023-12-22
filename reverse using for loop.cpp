// Reverse using for loop
#include<iostream>
using namespace std;
int main()
{
	int i, rev=0;
	cout<<"Enter the Number\n";
	cin>>i;
	for(;i>0;i=i/10)
	{ rev= rev*10 + i%10;
		}
		cout<<"\n Reverse ="<<rev;
		return 0;
}
