#include<iostream>
using namespace std;
class object
{ int n;
  public:
  	void getdata();
  	void putdata();
};
  void object::getdata()
  {
  	cout<<"Enter the Number\n";
  	cin>>n;
  }
  void object::putdata()
  {
  	cout<<"Entered Number is:"<<n<<endl;
  }
  int main()
  {
  	object ss[5];
  	int i;
	  for(i=0;i<5;i++)
	  { ss[i].getdata();
	  }
	  for(i=0;i<5;i++)
	  { ss[i].putdata();
	  }
	  return 0;
  }
