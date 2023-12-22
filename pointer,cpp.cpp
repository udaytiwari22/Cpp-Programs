#include<iostream>
using namespace std;
int main()
{
	int i,number[5],*ptr,sum=0;
	cout<<"Enter the values\n";
	for(i=0;i<5;i++)
	{ cin>>number[i];
	}
	for(i=0;i<5;i++)
	{ cout<<endl<<number[i];
	ptr=number;
	}
	for(i=0;i<5;i++)
	{ sum=sum + ptr[i];
	*ptr++;
	cout<<"Sum of even num. is:"<<sum;
	}
	return 0;
}
