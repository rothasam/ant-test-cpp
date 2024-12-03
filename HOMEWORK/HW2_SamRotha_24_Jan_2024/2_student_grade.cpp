#include<iostream>
#include<conio.h>
#include<cstdlib>
#include<iomanip>
using namespace std;

int main()
{
	string id,name,sex,room;
	float sc1,sc2,sc3;
	double total,avg;
	char grade;
	system("color 1");
	cout<<"\n\t\t------------------->>> FILL STUDENT INFORMATION <<<-------------------";
	cout<<"\n\n\t\t\t\t-> Enter ID          :  "; getline(cin,id);    
	cout<<"\n\n\t\t\t\t-> Enter Name        :  "; getline(cin,name);  
	cout<<"\n\n\t\t\t\t-> Enter Sex         :  "; getline(cin,sex);   
	cout<<"\n\n\t\t\t\t-> Enter Class       :  "; getline(cin,room);  
	cout<<"\n\n\t\t\t\t-> Enter Score       :  ";
	cout<<"\n\n\t\t\t\t\t    CPP      =  "; cin>>sc1; fflush(stdin);cin.clear();
	cout<<"\n\n\t\t\t\t\t    HTML     =  "; cin>>sc2; fflush(stdin);cin.clear();
	cout<<"\n\n\t\t\t\t\t    CSS      =  "; cin>>sc3; fflush(stdin);cin.clear();
	cout<<"\n\n\t\t----------------------------------------------------------------------";
	
	total=sc1+sc2+sc3;
	avg=total/3;
	
	//condition
	if(avg<=100.00 && avg>90.00)     grade = 'A';
	else if(avg<=90.00 && avg>80.00) grade = 'B';
	else if(avg<=80.00 && avg>70.00) grade = 'C';
	else if(avg<=70.00 && avg>60.00) grade = 'D';
	else if(avg<=60.00 && avg>50.00) grade = 'E';
	else if(avg<=50.00 && avg>=0.00) grade = 'F';
	else cout<<"\a\a\n\t\tNo grade!! You may entered wrong score!!!";
	
	cout<<"\n\t\t=> Press 'ENTER' to continue.\n"; getch();
	system("cls");
	system("color 6");
	cout<<fixed<<setprecision(2);
	cout<<"\n\n___________________________________________________________________________________________________________\n\n";
	cout<<left<<setw(8)<<"ID"<<left<<setw(14)<<"NAME"<<left<<setw(12)<<"SEX"<<left<<setw(12)<<"CLASS"<<left<<setw(10)
		<<"CPP"<<left<<setw(10)<<"HTML"<<left<<setw(10)<<"CSS"<<left<<setw(12)<<"TOTAL"<<left<<setw(12)<<"AVG"<<"GRADE";
		cout<<"\n___________________________________________________________________________________________________________\n\n\n";
		
	cout<<left<<setw(8)<<id<<left<<setw(14)<<name<<left<<setw(12)<<sex<<left<<setw(12)<<room<<left<<setw(10)
		<<sc1<<left<<setw(10)<<sc2<<left<<setw(10)<<sc3<<left<<setw(12)<<total<<left<<setw(14)<<avg<<grade;
	cout<<"\n\n___________________________________________________________________________________________________________\n\n";
	
	
	getch(); return 0;
}