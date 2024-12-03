#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;

int main()
{
	int age;
	string id; // code must be : ANTstudent (for 18-25) 
	float price;
	system("color 2");
	cout<<"\n\t------------------>> MOVIE TICKET <<------------------";
	cout<<"\n\n\t\t\tEnter Age: "; cin>>age;  fflush(stdin);cin.clear();
	cout<<"\n\t\t\tEnter ID : "; getline(cin,id);
	
	if(age<=12 && age>=0) 
		price=5;
	else if(age>=13 && age<=17) 
		price=8;
	else if(age>=18 && age<=25){
		if(id=="ANTstudent") price=10;
		else price=12;
	}
	else if(age>=26) 
		price=15;
	
	
	if(age>=18 && age<=25 && id=="ANTstudent")
		cout<<"\n\t\t\tYou have the ID.\n\n\t\t\tSo you must pay us $"<<price;
	else
		cout<<"\n\t\t\tYour ID is not match.\n\n\t\t\tSo you must pay us $"<<price;
	
	cout<<"\n\n\t------------------------------------------------------\n\n";
	
	
	getch(); return 0;
}