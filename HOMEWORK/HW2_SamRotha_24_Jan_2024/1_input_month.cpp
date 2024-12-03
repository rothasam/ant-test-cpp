#include<iostream>
#include<conio.h>
#include<cstdlib>
using namespace std;

int main()
{
	int month,day;
	
	cout<<"\n\n\n\t\t_______________________________________________________\n";
	cout<<"\n\t\t\t    Enter month number[1-12]  :  "; cin>>month; 
	
	system("color B0");
	if(month==1) cout<<"\n\t\t\t -> January have 31 days.";
	else if(month==2)  cout<<"\n\t\t\t -> February have 29 days.";
	else if(month==3)  cout<<"\n\t\t\t -> March have 31 days.";
	else if(month==4)  cout<<"\n\t\t\t -> April have 30 days.";
	else if(month==5)  cout<<"\n\t\t\t -> May have 31 days.";
	else if(month==6)  cout<<"\n\t\t\t -> June have 30 days.";
	else if(month==7)  cout<<"\n\t\t\t -> July have 31 days";
	else if(month==8)  cout<<"\n\t\t\t -> August have 31 days.";
	else if(month==9)  cout<<"\n\t\t\t -> September have 30 days.";
	else if(month==10) cout<<"\n\t\t\t -> October have 31 days.";
	else if(month==11) cout<<"\n\t\t\t -> November have 30 days.";
	else if(month==12) cout<<"\n\t\t\t -> December have 31 days.";
	else{
		system("color 4");
		cout<<"\a\a\n\t\t\t    Error!!! You enterd wrong number.";
	}
	
	cout<<"\n\t\t_______________________________________________________";
	getch(); return 0;
}