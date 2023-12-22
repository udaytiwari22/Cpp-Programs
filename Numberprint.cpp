#include<iostream>
using namespace std;
class oneton
{
	private:
		int n;
		public:
			void getdata();
			void putdata();
		
};
void oneton::getdata()
{
	cout<<"Enter the Number of count"<<endl;
	cin>>n;
}
void oneton::putdata()
{
	int i,sum=0;
	cout<<"Count is:\n";
	for(i=1;i<=n;i++)
{   
	cout<<i<<endl;
	sum=sum+i;
}

}
int main()
{ oneton ss;
  ss.getdata();
  ss.putdata();
  return 0;
}
