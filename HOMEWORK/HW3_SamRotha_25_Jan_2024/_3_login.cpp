#include<iostream>
#include<conio.h>
#include<windows.h>
using namespace std;

int main()
{
	//username : RothaSAM
	//password : 12345678
	string userName,password;
	int count=3;
	
	while(1){
		system("Color 3");
		cout<<"\n\n\t   ---------------->>> LOGIN FORM <<<----------------";
		cout<<"\n\n\t\t\tEnter username : "; getline(cin,userName); fflush(stdin);cin.clear();
		cout<<"\n\n\t\t\tEnter password : "; getline(cin,password); fflush(stdin);cin.clear();
		
		
		if(userName == "RothaSAM" && password == "12345678"){
			system("Color 2");
			cout<<"\n\n\t\t\t>>> Login successfully <<<"; 
			cout<<"\n\n\t   ---------------------------------------------------\n\n";
			cout<<"\n\n\t\t\t     \3 THANK YOU \3\n\n"; getch(); exit(0);
		}else{
			system("Color 4");
			
			
			if(userName == "RothaSAM" && password!="12345678")
				cout<<"\a\a\n\n\t\t\tInvalid Password!!!";
			else if(userName != "RothaSAM" && password == "12345678")
				cout<<"\a\a\n\n\t\t\tInvalid Username!!!";
			else
				cout<<"\a\a\n\n\t\t       Login unsuccessfully!!!";
			
			cout<<"\n\n\t   ---------------------------------------------------\n\n";
			cout<<"\n\n\n\t\t     >>>PRESS 'ENTER' FOR NEXT..."; 
			getch(); system("cls"); system("Color 6");
			
			count--;
			if(count==0){
				cout<<"\n\n\n\t\t\t ENDED PROGRAM!!!\n\n"; getch(); exit(0);
			}
			cout<<"\n\n\t\t  You have "<<count<<" more time to login.";
			cout<<"\n\n\t\t>>>PRESS 'ENTER' TO CONTINUE...";  getch(); system("cls");
		}
	}
	
	getch(); return 0;
}