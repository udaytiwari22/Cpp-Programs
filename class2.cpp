#include<iostream>
using namespace std;
class addition
{
    private:
    int a,b;
    public:
    void getdata();
    void putdata();
};
void addition ::getdata()
{
    cout<<"Enter two Numbers\n";
    cin>>a>>b;
}
void addition ::putdata()
{
    cout<<"Sum= "<<a+b;
}
int main()
{
    addition bb;
    bb.getdata();
    bb.putdata();
    return 0;
}
