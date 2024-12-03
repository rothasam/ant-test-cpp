#include<iostream>
#include<conio.h>
#include<windows.h>
using namespace std;

void inputData(string n,string id,string s,string sch,string m){
	cout<<"\n  Enter Name    :   "; getline(cin,n);  fflush(stdin);cin.clear();
	cout<<"\n  Enter ID      :   "; getline(cin,id); fflush(stdin);cin.clear();
	cout<<"\n  Enter Sex     :   "; getline(cin,s);   fflush(stdin);cin.clear();
	cout<<"\n  Enter School  :   "; getline(cin,sch); fflush(stdin);cin.clear();
	cout<<"\n  Enter Major   :   "; getline(cin,m);   fflush(stdin);cin.clear();
	cout<<"\n-----------------------------------\n";
	cout<<"\n  Name    :   "<<n; 
	cout<<"\n  ID      :   "<<id; 
	cout<<"\n  Sex     :   "<<s; 
	cout<<"\n  School  :   "<<sch; 
	cout<<"\n  Major   :   "<<m; 
}

//void outputData(string n,string id,string s,string sch,string m){
//	cout<<"\n  Name    :   "<<n; 
//	cout<<"\n  ID      :   "<<id; 
//	cout<<"\n  Sex     :   "<<s; 
//	cout<<"\n  School  :   "<<sch; 
//	cout<<"\n  Major   :   "<<m; 
//}

int main()
{
	string name,id,sex,school,major;
	
	inputData(name,id,sex,school,major);
	
//	system("cls");
	
//	outputData(name,id,sex,school,major);
	
		
	getch(); return 0;
}