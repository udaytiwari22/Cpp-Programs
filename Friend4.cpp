#include <iostream>
using namespace std;

class Y;

class X
{
    int data;

public:
    void setvalue(int value)
    {
        data = value;
    }
    friend void sum(X, Y);
};

class Y
{
    int num;

public:
    void setnum(int value)
    {
        num = value;
    }
    friend void sum(X, Y);
};

void sum(X o1, Y o2)
{
    cout << "Sum of data in class X and Y is = " << o1.data  + o2.num;
}
int main()
{
    X x;
    Y y;

    x.setvalue(3);
    y.setnum(5);
    
    sum(x, y);

    return 0;
}
