#include<iostream>
#include<conio.h>
#include<iomanip>
#include<windows.h>
using namespace std;

float AreaRectangle(float l,float w){
	return l*w;
}
float AreaTriangle(float b,float h){
	return (b*h)/2;
}
int main()
{
	float length,width,base,height;
	system("Color D0");
	cout<<fixed<<setprecision(2);
	cout<<"\n       _____________________ INPUT _____________________\n";
	cout<<"\n\t + Enter length of rectangle(m) =   "; cin>>length; fflush(stdin); cin.clear();
	cout<<"\n\t + Enter width  of rectangle(m) =   "; cin>>width;  fflush(stdin); cin.clear();
	cout<<"\n\t-> Area of rectangle            =   "<<AreaRectangle(length,width)<<"m^2\n";
	
	cout<<"\n\t + Enter base of triangle(m)    =   "; cin>>length; fflush(stdin); cin.clear();
	cout<<"\n\t + Enter heigh  of triangle(m)  =   "; cin>>width;  fflush(stdin); cin.clear();
	cout<<"\n\t-> Area of triangle             =   "<<AreaTriangle(length,width)<<"m^2";
	cout<<"\n    _______________________________________________________";
	
	
	getch(); return 0;
}