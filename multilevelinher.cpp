//Multilevel Inheritance
#include<iostream>
using namespace std;
class Student
{ 
	protected:
	int roll;
	public:
		void getroll()
		{
			cout<<"Enter the roll num.";
			cin>>roll;
		}
			void putroll()
			{ 
				cout<<"\n Roll Num:"<<roll;
			}
};
    class Test: public Student
    {
    	protected:
    		int sub1,sub2;
    	public:
    		void getdata()
    		{
    			cout<<"enter marks for sub1 and sub2:";
    			cin>>sub1>>sub2;
			}
			void putdata()
			{
				cout<<"\nSub1 ="<<sub1;
				cout<<"\nSub2 ="<<sub2;
			}
	};
	class Result:public Test
	{
		protected:
			int res;
		public:
			void getres()
			{
				getdata();
				res=sub1+sub2;
			}
			void putres(){
				cout<<"\nTotal marks is: "<<res;
			}
	};
	int main()
	{
		Result r;
		r.getroll();
		r.getres();
		r.putroll();
		r.putdata();
		r.putres();
	}
