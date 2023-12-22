#include<iostream>
using namespace std;
int main()
{
	int a[10],b,i,n,loc,c=0;
	cout<<"Enter the Number of Elements in array\n";
	cin>>n;
	cout<<"Enter the Array\n";
	for(i=0;i<n;i++)
	{
	  cin>>a[i];
	}
	cout<<"Enter the Number to be Searched\n";
	cin>>b;
	for(i=0;i<n;i++)
	{ 
		if(a[i]==b)
	{
		loc=i;
		c=1;
	}
	}
	if(c==1)
	{
		cout<<"\nElement found at:"<<loc;
	}
else
{ 
	cout<<"Element not found\n";
}
return 0;
	
	
	
}
