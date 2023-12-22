#include<iostream>
using namespace std;
int count=0;
class Demo
{  
   public:
    Demo()
    {  count++;
       cout<<"\nNumber of objects created="<<count;
	}
	~Demo()
	{ count--;
	  cout<<"\nNumber of objects destroyed="<<count;
	}
};
 int main()
 {  Demo aa,bb,cc;
  {    Demo dd;}
   
   return 0;
 }
