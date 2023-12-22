#include <iostream>
using namespace std;

class Employee
{

    int id;
    int salary;

public:
    void setId(void)
    {
        salary = 122;
        cout << " Enter the Id " << endl;
        cin >> id;
    }
    void getid(void)
    {
        cout << "Id of the Employee is " << id << endl;
    }
};

int main()
{
    Employee S[4];
    for (int i = 0; i < 4; i++)
    {
        S[i].setId();
        S[i].getid();
    }

    return 0;
}