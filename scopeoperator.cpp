#include<iostream>
using namespace std;
class Room
{
    int l,b;
    public:
    void getdata(int x,int y)
    {
        l=x;
        b=y;
    }
    void putdata();  //Declare
};
/*scope operator ( :: ) 
syntax: return_type classname:: function name(arguments)*/
void Room::putdata()
{
    cout<<"\n Length is:: "<<l;
    cout<<"\n Breadth is:: "<<b;
    cout<<" \n Area is:: "<<l*b;
}
int main()
{
    Room s;
    s.getdata(12,14);
    s.putdata();
    return 0;
}