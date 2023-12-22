#include <iostream>
#include <string>
using namespace std;

class binary
{
    string s;

public:
    void read(void);
    void chk_bin(void);
    void ones_complement(void);
    void display(void);
    void display1(void);
};
void binary::read(void)
{
    cout<<"Enter the Binary String";
    cin>>s;
}
void binary::chk_bin(void)
{
    int i;
    for(i=0; i<s.length(); i++)
    {
        if(s.at(i) != '0' && s.at(i) !='1')
        {
            cout<<"Incorrect Binary Format"<<endl;
            exit(0);
        }
    }
}
void binary::ones_complement(void)
{   
    int i;
    for(i=0; i<s.length(); i++)
    {  
        if(s.at(i)=='0')
        {
        s.at(i)='1';
        }
        else
        {
            s.at(i)='0';
        }
    }
}
void binary::display(void)
{ 
    chk_bin();            //Nesting of Member Function is Performed here
    int i;
    cout<<"Displaying your Binary Number"<<endl;
   for(i=0; i<s.length(); i++ )
   {
    cout<<s.at(i);}
    cout<<endl;
}
void binary::display1(void)
{ 
    int i;
    cout<<"Displaying Ones Complement of Binary Number"<<endl;
   for(i=0; i<s.length(); i++ )
   {
    cout<<s.at(i);}
    cout<<endl;
}

int main()
{
    binary bb;
    bb.read();
   //  bb.chk_bin();
    bb.display();
    bb.ones_complement();
    bb.display1();
    

    return 0;
}