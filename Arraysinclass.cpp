#include <iostream>
using namespace std;

class Shop
{
    int ItemId[100];
    int ItemPrice[1000];
    int counter;

public:
    void Startcounter(void) { counter = 0; }     
    void Setprice(void);
    void DisplayPrice(void);
};

void Shop::Setprice(void)
{
    cout << "Enter ID of your Item" << counter + 1 << endl;
    cin >> ItemId[counter];
    cout << "Enter Price of Item" << endl;
    cin >> ItemPrice[counter];
    counter++;
}
void Shop::DisplayPrice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << " The Price of Item with Item Id is " << ItemId[i]  <<  " is "  <<  ItemPrice[i]  << endl;
    }
}

int main()
{
    Shop d;
    d.Startcounter();
    d.Setprice();
    d.Setprice();
    d.Setprice();
    d.DisplayPrice();

    return (0);
}