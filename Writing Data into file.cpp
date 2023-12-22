//  FILE HANDLING IN C++

#include<iostream>
#include<stdio.h>
#include<fstream>
using namespace std;
int main()
{
	char c,fname[10];
	ofstream out;    //out is a object
	cout<<"Enter file name";
	cin>>fname;
	out.open(fname);
	cout<<"Enter Contents to store in file(enter # to save a file)";
	
	while((c=fgetchar())!='#')
	{ out<<c;
	}
	out.close();
}
