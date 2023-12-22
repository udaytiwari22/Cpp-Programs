#include<iostream>
using namespace std;
class A
{  

 public:
 	int a;
    void display()
	{  cout<<"Enter the Number\n";
	cin>>a;
	 } 
	
};
class B:public A
{
      
	  public:
	  	int b;
	  	void input()
	  	{ cout<<"Enter the second Number\n";
	  	cin>>b;
		  }
};
class C:public B
{ 
   public:
   	void getdata()
   	{  cout<<"Sum of two Numbers is:"<<a+b;
	   }
};
   int main()
   {  C cc;
      cc.display();
      cc.input();
      cc.getdata();
      
      return 0;
   }

