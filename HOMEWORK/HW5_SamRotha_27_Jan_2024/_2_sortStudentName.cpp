#include<iostream>
#include<conio.h>
#include<windows.h>
using namespace std;

int main()
{
	string name[30];
	char option;
	int n;
	
	do{
		
		system("cls");
		system("Color 3");
		cout<<"\n\n\t\t_________________________________\n\t\t|\t\t\t\t|";
		cout<<"\n\t\t|\t      MENU              |";
		cout<<"\n\t\t|_______________________________|\n\t\t|\t\t\t\t|";
		cout<<"\n\t\t|   [A]. Input Student Name. \t|";
		cout<<"\n\t\t|   [B]. Display Student Name. \t|";
		cout<<"\n\t\t|   [C]. Sort Student Name. \t|";
		cout<<"\n\t\t|   [D]. Exit Program.\t\t|";
		cout<<"\n\t\t|\t\t\t\t|\n\t\t|_______________________________|";
		cout<<"\n\n\t\t  >>> Choose Option Above  : "; 
		cin>>option; fflush(stdin); cin.clear();
		
		
		switch(option){
			
			case 'A': case 'a':{
				cout<<"\n\n\t\t\t>>> Enter N :  "; 
				
	// check if n is not a number		
				while(!(cin>>n)){
					cout<<"\n\a\a\t    Error!!! Please press anykey to try again.";system("Color 4"); getch();
					system("Color 3");   cout<<"\n\n\t\t\t>>> Enter N :  ";  fflush(stdin); cin.clear(); 
				}
				fflush(stdin); cin.clear(); 
				system("cls"); system("Color 2");
				
		// Input			
				cout<<"\n\n\t\t   <---------- INPUT STUDENT NAME ---------->\n";
				for(int i=0;i<n;i++){
					cout<<"\n\n\t\t\t     -> ["<<i+1<<"]. "; 
					getline(cin,name[i]); fflush(stdin); cin.clear();
				}
				cout<<"\n\n\t\t   <--------------------------------------->"; 
				cout<<"\n\n\t\t\t>>> PRESS ANYKEY TO CONTINUE <<<";
				
				break;
			}
			
		//output
			case 'B': case 'b':{
				system("cls"); system("Color 2");
				cout<<"\n\n\t\t   <---------- DISPLAY STUDENT NAME ---------->\n";
				for(int i=0;i<n;i++){
					cout<<"\n\n\t\t\t\t ["<<i+1<<"]. "<<name[i];
				}
				cout<<"\n\n\n\t\t   <------------------------------------------>"; 
				cout<<"\n\n\t\t\t>>> PRESS ANYKEY TO CONTINUE <<<";
				break;
			}
			
		//sort
			case 'C': case 'c':{
				string tmp;
				system("cls"); system("Color 2");
				cout<<"\n\n\t\t   <---------- SORT STUDENT NAME ---------->\n";
				for(int i=0;i<n;i++){
					for(int j=i+1;j<n;j++){ 
						if(name[i]>name[j]){  
							tmp=name[i];
							name[i]=name[j];
							name[j]=tmp;
						}
					}
				}
				for(int i=0;i<n;i++){
					cout<<"\n\n\t\t\t\t ["<<i+1<<"]. "<<name[i];
				}
				cout<<"\n\n\t\t   <--------------------------------------->"; 
				cout<<"\n\n\t\t\t>>> PRESS ANYKEY TO CONTINUE <<<";
				
				break;
			}
			
			
			case 'D': case 'd':{
				cout<<"\n\n\t\t\t >>> Goodbye.\n\n";  exit(0);
				break;
			}
			default:{
				system("Color 4");
				cout<<"\n\n\a\a\t\t\tInvalid option!!!\n\n\t\t Please press anykey to try again.";
				break;
			}
			
		}

		getch();
	}while(1);
	
	

	getch(); return 0;
}