#include<iostream>
#include<conio.h>
#include<windows.h>
#include<iomanip>
using namespace std;


	string id[50],name[50],sex[50];
	float salary[50];

float taxPercent(double s){
	float tax=0.0;
	if(s<100.00 && s>=0.0) tax=0.001;   // 0.1%
	else if(s>=100.0 && s<500.0) tax=0.015; // 1.5%
	else if(s>=500.0 && s<1000.0) tax=0.025; // 2.5%
	else if(s>=1000.0 && s<2000.0) tax=0.035; //3.5%
	else if(s>=2000.0) tax=0.045; //  4.5%

	return tax;
}

double salaryRemain(float s){
	return s-(s*taxPercent(s));
}

double taxPay(float s){
	return s*taxPercent(s);
}


void inputData(int n){
	system("cls");
	for(int i=0;i<n;i++){
		system("Color 2"); 
		cout<<"\n\t\t===================== STAFF[#"<<i+1<<"] =====================\n\n";
		cout<<"\t\t\t    + Input ID         :  ";  getline(cin,id[i]);   fflush(stdin); cin.clear();
		cout<<"\t\t\t    + Input Name       :  ";  getline(cin,name[i]); fflush(stdin); cin.clear();
		cout<<"\t\t\t    + Input Sex        :  ";  getline(cin,sex[i]);  fflush(stdin); cin.clear();
	INPUT:
		do{  // check if input not a number
		
			cout<<"\t\t\t    + Input Salary($)  :  ";   fflush(stdin); cin.clear();				
		}while(!(cin>>salary[i]));   fflush(stdin); cin.clear();
					
	if(salary[i]<0) goto INPUT;   // if number is negative
				
		cout<<fixed<<setprecision(2);
		cout<<"\t\t\t    + Total Tax(%)     :  "<<taxPercent(salary[i])*100<<"%"<<endl;
		cout<<"\t\t\t    + Total PayTax     :  "<<taxPay(salary[i])<<"$"<<endl;
		cout<<"\t\t\t    + Remain Salary    :  "<<salaryRemain(salary[i])<<"$";
		cout<<"\n\t\t_____________________________________________________\n\n";
				
		cout<<"\n\t\t\t  <<< PRESS ANYKEY TO CONTINUE >>>"; 
	}
}





int main()
{
	char op;
	int n=0;
	
	
	do{
		system("cls");  system("Color D");
		cout<<"\n\t\t   _______________ STAFF INFORMATION _______________\n";
		cout<<"\n\t\t\t     [F]. Fill Staff Information.";
		cout<<"\n\t\t\t     [S]. Show Staff Information.";
		cout<<"\n\t\t\t     [T]. Total Tax of All Staff.";
		cout<<"\n\t\t\t     [N]. Exit Program";
		cout<<"\n\t\t   __________________________________________________";
		cout<<"\n\n\t\t\t         >>> Enter Option : "; cin>>op;   fflush(stdin); cin.clear(); 
		
		switch(op){
			case 'F': case 'f':{ 
			AGAIN:
				TRY:  system("Color D");
					cout<<"\n\n\t\t\t     -> Input amount of staff : "; 
				//check if n not a number
					while(!(cin>>n)){  	
						fflush(stdin); cin.clear();  system("Color 4"); 
						cout<<"\n\a\a\t\t\t\t     TRY AGAIN!!!!";  getch();
				goto TRY;
					}
					fflush(stdin); cin.clear();
				
				if(n<=0) goto AGAIN;
					inputData(n); // calling void function
				break;
			}
			
			case 'S': case 's':{
				if(n>=1){
				    system("cls");	system("Color A");
					cout<<"\n\n\nID\t\tNAME\t\tSALARY\t\tTAX\t\tPAY\t\tREMAIN\n";
					cout<<"============================================================================================\n";
					cout<<fixed<<setprecision(2);
					for(int i=0;i<n;i++){
						Sleep(500);
						cout<<left<<setw(16)<<id[i]<<left<<setw(16)<<name[i]<<"$"<<left<<setw(15)<<salary[i]<<"%"
							<<left<<setw(15)<<taxPercent(salary[i])*100<<"$"<<left<<setw(15)<<taxPay(salary[i])<<"$"
							<<left<<setw(15)<<salaryRemain(salary[i])<<endl;
						cout<<"--------------------------------------------------------------------------------------------\n";
					}
					Sleep(700);
					cout<<"\n\n\t\t\t\t<<< PRESS ANYKEY TO CONTINUE >>>"; 
				}else{
					system("Color 4");
					cout<<"\a\a\n\a\a\t\t\t\t      NO DATA!!";
					cout<<"\n\t\t\t     >>> Plese goto option F first";
				}
				
				break;
			}
			case 'T': case 't':{
				
				if(n>=1){
					 system("cls"); system("Color 2"); 
					int staff=0; 
					float totalTAX=0.00;
					cout<<fixed<<setprecision(2);
					cout<<"\n\n\n\t\t   ==========>>> TOTAL TAX THAT STATE HAVE RECIEVED <<<==========\n";
					for(int i=0;i<n;i++){
						totalTAX+=taxPay(salary[i]);
						staff++;
					}
					cout<<"\n\t\t\t           Amount of staff   :  "<<staff;
					cout<<"\n\t\t\t           Total of tax      :  "<<totalTAX<<"$";
					cout<<"\n\n\t\t   ==============================================================\n";
					cout<<"\n\n\t\t\t\t<<< PRESS ANYKEY TO CONTINUE >>>"; 
				}else{
					system("Color 4");
					cout<<"\a\a\n\a\a\t\t\t\t      NO DATA!!";
					cout<<"\n\t\t\t     >>> Plese goto option F first";
				}
				
				break;
			}
			case 'N': case 'n':{
				cout<<"\n\n\t\t\t          \2 END PROGRAM \2"; 
				exit(0);
				break;
			}
			default:{
				system("Color 4");
				cout<<"\n\a\a\t\t\t\t   INVALID OPTION!!!";
				break;
			}
			
		}
		getch();
	}while(1);
	
	
	getch();
	return 0;
}