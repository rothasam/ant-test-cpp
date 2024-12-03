#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
	float cost,sold,total;
	
	cout<<"\n------------------>> Enter Data <<--------------------";
	cout<<"\n\n\tEnter cost of product       :  "; cin>>cost;
	cout<<"\n\tEnter cost of sold product  :  "; cin>>sold;
	
	if(sold>cost){
		total=sold-cost;
		cout<<"\n\tYour profit of product is "<<total<<endl;
	}
	else{
		total=cost-sold;
		cout<<"\n\tYour loss of product is "<<total<<endl;
	}
	
	cout<<"\n------------------------------------------------------";
	getch(); return 0;
}