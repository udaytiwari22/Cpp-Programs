#include<iostream>
using namespace std;
class demo
{ int x,y;
   static int z;
   public:
   	void getdata(int a,int b)
   	{ x=a;
   	  y=b;
   	  z=z+1;
	   }
	   void putdata()
	   { cout<<"\nx="<<x<<"\ny="<<y<<"\nz="<<z;
	   }
};
int demo::z; //This is mandatory to write if you declared any static data member in class
int main()
{   demo aa,bb;  //z=0
    aa.getdata(5,2);  //z=1
    bb.getdata(8,4);  //z=2
    aa.putdata();     //z=2
    bb.putdata();     //z=2
    return 0;
}

