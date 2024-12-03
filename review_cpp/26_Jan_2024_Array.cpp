#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
	int id[3];
	string name[3];
	
	for(int i=0;i<3;i++){
		cout<<"\n------------------Fill Student ["<<(i+1)<<"]------------------";
		cout<<"\n + Input Student ID  : "; cin>>id[i]; fflush(stdin);cin.clear();
		cout<<"\n + Input Student Name: "; getline(cin,name[i]);
	}
	
	cout<<"\n-------------------Student Information-----------------\n";
	for(int i=0;i<3;i++){
		cout<<id[i]<<"\t"<<name[i]<<endl;
	}
	
	
	
	
/*
	int months[12] = 
	{
		31,29,31,30,31,30,31,31,30,31,30,31
	};
	
	for(int i=0;i<12;i++){
		cout<<"\n\tMonth in "<<(i+1)<<" have "<<months[i]<<" days.\n";
	}
*/
	
	
	getch(); return 0;
}