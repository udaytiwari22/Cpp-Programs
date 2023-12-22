#include<iostream>
using namespace std;
class A
{   public:
    void display()
	{  cout<<"Output of Inheritance\n";
	 } 
};
class B:public A
{
	  public:
	  	void input()
	  	{ cout<<"Output of  2nd Multilevel Inheritance\n";
		  }
};
class C: public B 
{ 
   public:
   	void getdata()
   	{  cout<<"Output 3rd Multilevel Inheritance\n";
	   }
};
   int main()
   {  C cc;
      cc.display();
      cc.input();
      cc.getdata();
      
      return 0;
   }

