#include<iostream>

using namespace std;
class demo
{ int a,b;
   public:
    demo(int m,int n)
    {  a=m;
       b=n;
	}
	void putdata()
	{
		cout<<"a="<<a<<"\nb="<<b;
	}
};
  int main()
  {  demo ss(5,2);
     ss.putdata();
     return 0;
  }
