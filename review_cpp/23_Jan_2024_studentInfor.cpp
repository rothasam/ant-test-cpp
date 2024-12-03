#include<iostream>
#include<conio.h> 
#include<iomanip>
using namespace std;

int main()
{
	int id,age;
	char name[25]; // cin.get(charArrayName,size); use char size
	char gender[15];
	string address; // getline(cin,string_name); use for many words #include<string>
	double height;
	
	//input
	cout<<"\n-----------------\3\3 Fill Student Information\3\3-----------------\n";
	cout<<"\n\t + Enter Student ID          :   "; cin>>id;               fflush(stdin); cin.clear();
	cout<<"\n\t + Enter Student Name        :   "; cin.get(name,25);      fflush(stdin); cin.clear();
	cout<<"\n\t + Enter Student Gender      :   "; cin.get(gender,15);    fflush(stdin); cin.clear();
	cout<<"\n\t + Enter Student Age         :   "; cin>>age;              fflush(stdin); cin.clear();
	cout<<"\n\t + Enter Student Height(cm)  :   "; cin>>height;           fflush(stdin); cin.clear();
	cout<<"\n\t + Enter Student Address     :   "; getline(cin,address);  fflush(stdin); cin.clear();
	
	system("cls");
	//output
	cout<<"\n___________________STUDENT INFORMATION___________________\n";
	cout<<fixed<<setprecision(2);
	cout<<"\n\tStudent ID         :  "<<id<<endl;
	cout<<"\n\tStudent Name       :  "<<name<<endl;
	cout<<"\n\tStudent Gender     :  "<<gender<<endl;
	cout<<"\n\tStudent Age        :  "<<age<<" year old."<<endl;
	cout<<"\n\tStudent Height     :  "<<height<<" cm"<<endl;
	cout<<"\n\tStudent Address    :  "<<address<<endl;
	getch();
	return 0;
}