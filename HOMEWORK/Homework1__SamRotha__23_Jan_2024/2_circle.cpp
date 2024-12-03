#include<iostream>
#include<conio.h>
#include<iomanip>
#include<cmath> // pow()
#define PI 3.14
#include<windows.h> // sleep()
using namespace std;

int main()
{
	float r,diameter,circumference,area;
	cout<<"\n-------------------- DATA of CIRCLE ---------------------\n";
	cout<<"\n\t Enter Radius of circle(m) =  "; cin>>r;
	cout<<fixed<<setprecision(2);
	cout<<"\n\n\t User entered radius      =  "<<r<<" m";
	cout<<"\n\n\t -> Press 'Enter' to continue: "; getch();
	
	//formular
	diameter=r*2;
	circumference=r*2*PI;
	area=PI*(pow(r,2));
	
	cout<<"\n\n\t   Diameter      = "<<r<<"*2 = "<<diameter
		<<"\n\t   Circumference = "<<r<<"*2*"<<PI<<" = "<<circumference
		<<"\n\t   Area          = "<<PI<<"*"<<r<<"^2"<<" = "<<area;
	cout<<"\n\n\t------------->> RESULT <<-----------------";
	Sleep(1000);
	cout<<"\n\n\t Diameter of cicle        =  "<<diameter<<" m"; Sleep(1000);
	cout<<"\n\n\t Circumference of circle  =  "<<circumference<<" m"; Sleep(1000);
	cout<<"\n\n\t Area of circle           =  "<<area<<" m^2"; Sleep(1000);
	cout<<"\n\n----------------------------------------------------------------\n\n";
	
	getch();
	return 0;
}