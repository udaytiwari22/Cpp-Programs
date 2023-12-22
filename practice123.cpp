#include<iostream>
using namespace std;
class Sum
{
	int a,b;
	public:
		void getdata();
		void putdata();
};
  void Sum::getdata()
  { cout<<"Enter Two Numbers: \n";
      cin>>a>>b;
  }
  void Sum::putdata()
  { cout<<"Sum of Numbers is: "<<a+b;
  }
  int main()
  {
  	Sum ss;
  	ss.getdata();
  	ss.putdata();
  	return 0;
  }
