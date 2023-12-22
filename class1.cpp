#include<iostream>
using namespace std;
class addition 
{ private:
int a,b;
public:
void getdata()
{
    cout<<"Enter two numbers\n";
    cin>>a>>b;
}
void putdata()
{
    cout<<"Sum ="<<a+b;
}
};
int main()
{
    addition ss;
    ss.getdata();
    ss.putdata();
    return 0;
}