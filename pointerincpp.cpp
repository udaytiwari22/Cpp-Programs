#include<iostream>
using namespace std;
class item
{
	int code;
	float price;
	public:
		void getdata(int a,float b)
		{ code=a;
		price=b;
		}
		void show()
		{ 
		cout<<"\nCode:"<<code<<"\n";
		cout<<"Price:"<<price<<"\n";
		}
};
int size=2;
int main()
{
	item *p=new item[size];//new operator is used to allocate memory to particular variable of pointer type
	item *d=p;
	int x,i;
	float y;
	for(i=0;i<size;i++)
	{
	cout<<"Input code $ price for item"<<i+1;
	cin>>x>>y;
	p->getdata(x,y);
	p++;
	
	}
	for(i=0;i<size;i++)
	{
	cout<<"\nItem:"<<i+1;
	d->show();
	d++;
}
}
