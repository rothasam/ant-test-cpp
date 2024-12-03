#include<iostream>
#include<conio.h>
#include<windows.h>
using namespace std;
 
int main()
{
	string name[30],price[30],dis[30];
	int n;
	
	// Prevent when there is wrong input
	do{
		system("Color 9");
		cout<<"\n\n\n\t\t\t\t  >>> Enter number of course : ";  
		
		if(cin>>n){  
			if(n>30){
				system("cls"); system("Color 4");
				cout<<"\a\a\n\n\t\t\t    >>> Sorry there are not enough space to input data!!!";
				getch(); system("cls");
			}else{
				fflush(stdin);cin.clear();
				break;
			}
		}else{
			system("cls"); system("Color 4");
			cout<<"\a\a\n\n\t\t\t\t    >>> Sorry it not a number!!!";
			getch(); system("cls");
		}
		fflush(stdin);cin.clear();
	}while(1);
	
    // input
	 
	cout<<"\n\n\n\t___________________________ FILL COURSE INFORMATION ___________________________\n\n\n";
	for(int i=0;i<n;i++){
		cout<<"\n\t\t\t***************>>> INPUT["<<(i+1)<<"] <<<***************\n";
		cout<<"\n\t\t\t + Enter course name        :   ";  getline(cin,name[i]);   fflush(stdin);cin.clear();
		cout<<"\n\t\t\t + Enter course price       :   ";  getline(cin,price[i]);  fflush(stdin);cin.clear();
		cout<<"\n\t\t\t + Enter course discount(%) :   ";  getline(cin,dis[i]);    fflush(stdin);cin.clear();
		cout<<"\n\t\t\t**********************************************\n";
	}
	cout<<"\n\n\t_________________________________________________________________________________\n\n";
	
	// output
	
	cout<<"\n\n\n\t________________________________ COURSE INFORMATION _____________________________\n\n\n";
	for(int i=0;i<n;i++){
		cout<<"\n\t\t\t\t >>> COURSE[#"<<(i+1)<<"]  :";
		cout<<"\n\t\t\t\t     - Name      :  "<<name[i];
		cout<<"\n\t\t\t\t     - Price     :  "<<price[i]<<"$";
		cout<<"\n\t\t\t\t     - Discount  :  "<<dis[i]<<"%"<<endl;
	}
	cout<<"\n\n\t_________________________________________________________________________________";
	
	
	getch(); 
	cout<<"\n\n\n\n\t\t\t\t\t\2 THANK YOU \2\n\n\n";
	return 0;
}