#include<iostream>
using namespace std;
class reverse
{
	protected:
		int a;
		public:
			void getdata();
			void putdata();
};
   void reverse::getdata()
   { cout<<"Enter the Number whose reverse is Needed\n";
     cin>>a;
   }
   void reverse::putdata()
   { int i,rev=0;
    for(i>a;i<=a/10;i++)
     {rev=rev*10+a%10;
     a=a/10;}
     	cout<<"Reverse of given number is="<<rev;
   }
   int main()
   {
   	reverse aa;
   	aa.getdata();
   	aa.putdata();
   
   	return 0;
   }
