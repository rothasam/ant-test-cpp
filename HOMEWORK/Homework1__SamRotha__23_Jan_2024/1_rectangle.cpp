#include<iostream>
#include<conio.h>
#include<iomanip>
#include<stdlib.h> // system("cls")
using namespace std;

int main()
{
	float length,width,area,perimeter;
	
	cout<<"\n-------------------------------- INPUT --------------------------------\n";
	cout<<"\n\t Enter length of rectangle(m) =   "; cin>>length;
	cout<<"\n\t Enter width  of rectangle(m) =   "; cin>>width;
	system("cls");
	cout<<"\n--------------------------->>Rectangle Data<<-------------------------\n";
	cout<<fixed<<setprecision(2); 
	cout<<"\n\t\t Length of rectangle     =   "<<length<<" m\n\n\t\t Width of rectangle      =   "<<width<<" m";
	
	//formular
	area=length*width;
	perimeter=2*(length+width);
	
	cout<<"\n\n\t    Press 'Enter' to see the Area of rectangle : "; getch();
	cout<<"\n\n\t\t Area = "<<length<<"*"<<width<<" = "<<area<<endl;
	cout<<"\n\t      => Area of rectangle     =  "<<area<<"m^2"<<endl;
	cout<<"\n\t    Press 'Enter' to see the Perimeter of rectangle : "; getch();
	cout<<"\n\n\t\t Perimeter = 2*("<<length<<"+"<<width<<") = "<<perimeter<<endl;
	cout<<"\n\t      => Perimeter of rectangle=  "<<perimeter<<"m"<<endl;
	
	cout<<"\n---------------------------------------------------------------------\n";
	
	getch();
	return 0;
}