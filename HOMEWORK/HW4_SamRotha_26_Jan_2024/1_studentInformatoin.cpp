#include<iostream>
#include<conio.h>
#include<iomanip>
#include<windows.h>
using namespace std;

int main()
{
	int n;
	string id[5],name[5],tel[5],addr[5];


	//check if n is bigger than size of array
	do{
		system("Color 6");
		cout<<"\n\n\t\t\t\t       >>> Enter number of student(<=5) : "; 
		
		if(cin>>n){  
			if(n>5){
				system("cls"); system("Color 4");
				cout<<"\a\a\n\n\t\t\t    >>> Sorry there are not enough space to input data!!!";
				getch(); system("cls");
			}else{
				fflush(stdin);cin.clear();
				break;
			}
		}else{
			system("cls"); system("Color 4");
			cout<<"\a\a\n\n\t\t\t\t    >>> Sorry invalid input!!!";
			getch(); system("cls");
		}
		fflush(stdin);cin.clear();
	}while(1);
	
	
	//input data
	
	cout<<"\n\n\t\t-------------------------->>> Fill Student Information <<<--------------------------\n\n";
	for(int i=0;i<n;i++){
		cout<<"\n\t\t\t\t\t   ___________STUDENT["<<(i+1)<<"]___________\n";
		cout<<"\n\t\t\t\t\t    -> Input ID       :  "; getline(cin,id[i]);    fflush(stdin);cin.clear();
		cout<<"\n\t\t\t\t\t    -> Input Name     :  "; getline(cin,name[i]);  fflush(stdin);cin.clear();
		cout<<"\n\t\t\t\t\t    -> Input Tel      :  "; getline(cin,tel[i]);   fflush(stdin);cin.clear();
		cout<<"\n\t\t\t\t\t    -> Input Address  :  "; getline(cin,addr[i]);  fflush(stdin);cin.clear();
		cout<<"\n\t\t\t\t\t   ________________________________\n";
	}
	cout<<"\n\t\t-------------------------------------------------------------------------------------\n";
	cout<<"\n\n\t\t\t\t        >>> Press anykey to display data <<<"; getch(); system("cls"); system("Color 2");
	
	// output data

	cout<<"\n\n\n\t\t------------------------>>> Display Student Information <<<--------------------------\n\n\n";
	cout<<"\t\t\t\t    "<<left<<setw(14)<<"ID"<<left<<setw(14)<<"NAME"<<left<<setw(14)<<"TELEPHONE"<<left<<setw(14)<<"ADDRESS"<<endl;
	cout<<"\n\t\t\t     ===========================================================";
	for(int i=0;i<n;i++){
		cout<<"\n\n\t\t\t\t    "<<left<<setw(14)<<id[i]<<left<<setw(14)<<name[i]<<left<<setw(14)<<tel[i]<<left<<setw(14)<<addr[i]<<endl;
	}
	cout<<"\n\t\t\t     ===========================================================\n\n\t\t\t    ";
	cout<<"\n\n\t\t-------------------------------------------------------------------------------------\n";
	cout<<"\n\n\t\t\t\t\t\t   \2 Ended Program \2\n\n\n";
	
	
	
	
	getch(); return 0;
}