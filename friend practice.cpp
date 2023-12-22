#include<iostream>
using namespace std;
class Sample
{ int a,b;
  public:
  	void getdata()
  	{ cout<<"Enter any two numbers:";
  	  cin>>a>>b;
	  }
	  friend int mean(Sample);  //Always pass an argument as classname
};
 int mean(Sample ss)
 { 
   return((ss.a+ss.b)/2);	
 }
 int main()
 {
 	Sample ss1;
 	ss1.getdata();
 	cout<<"Mean is :"<<mean(ss1);
     return 0;	
 }
