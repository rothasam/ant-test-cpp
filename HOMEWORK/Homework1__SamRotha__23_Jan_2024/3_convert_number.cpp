#include<iostream>
#include<conio.h>
#include<cstdlib> // system("cls")
#include<iomanip>
#include<cmath>
using namespace std;

int main()
{
	float num,m,km;
	cout<<"\n---------------------------- INPUT ----------------------------";
	cout<<"\n\n\tEnter number(mm) =  "; cin>>num;
	system("cls");
	cout<<fixed<<setprecision(3);
	cout<<"\n---------------------------- OUTPUT ----------------------------";
	
	m=num*pow(10,-3); // num*10^(-3)  or  num*0.001
	km=num*pow(10,-6); // num*10^-6 
	cout<<"\n\n\t   User entered number   =  "<<num<<" mm";
	cout<<"\n\n\t=> Convert (mm) to (m)  : "
		<<num<<" mm  = "<<m<<" m"<<fixed<<setprecision(6)
		<<"\n\n\t=> Convert (mm) to (km) : "
		<<num<<" mm = "<<km<<" km"<<endl;
		
	cout<<"\n---------------------------------------------------------------";
	getch();
	return 0;
}