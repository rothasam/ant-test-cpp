#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
	cout<<"\n\t----------------------------------\n\n\t";
	cout<<"\n\t-> Display number from 1 to 1024\n\n\t";
	for(int i=1;i<=1024;i*=2)
		cout<<i<<" ";
	
	cout<<"\n\n\t";
	cout<<"\n\n\t-> Display number from 1024 to 1\n\n\t";
	for(int i=1024;i>=1;i/=2)
		cout<<i<<" ";
	
	cout<<"\n\n\t----------------------------------\n\t";
	getch(); return 0;
}