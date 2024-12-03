#include<iostream>
#include<conio.h>
#include<windows.h>
#include<cstdlib> 
#include<iomanip>
using namespace std;

int main()
{
	int op;
	char opt;
	float a,b,r; 
	a=b=r=0.00; // prevent showing no input data
	
	do{
		system("Color A");
		system("cls");
		cout<<"\n\n\t------------->>> CALCULATOR <<<-------------\n";
		cout<<"\n\t\t    [1]. Input Number.";
		cout<<"\n\n\t\t    [2]. Choose Operator.";
		cout<<"\n\n\t\t    [3]. Display Result.";
		cout<<"\n\n\t\t    [4]. Exit Program.";
		cout<<"\n\n\t---------------------------------------------";
		cout<<"\n\n\t\t   >>> SELECT ONE OPTION : "; cin>>op; fflush(stdin);cin.clear();
	
Again:
		system("cls"); system("Color B0");
		if(op==1){
			
			cout<<"\n\t\t____________LET INPUT____________\n";
			cout<<"\n\t\t    -> Enter number of a  = "; cin>>a;  fflush(stdin);cin.clear();
			cout<<"\n\t\t    -> Enter number of b  = "; cin>>b;  fflush(stdin);cin.clear();
			cout<<"\n\t\t__________________________________";
			
		}else if(op==2){
			
			cout<<fixed<<setprecision(2);
				cout<<"\n\t\t_______________CHOOSE OPERATOR_______________\n";
				cout<<"\n\t\t   -> Your data: a = "<<a<<" ,  b = "<<b;
				cout<<"\n\n\t\t      >>> Enter Operator [+,-,*,/] : "; cin>>opt;
				cout<<"\n\t\t   You enterd '"<<opt<<"' operator, here result : \n";
				if(opt=='+'){
					r=a+b;
					cout<<"\n\t\t\t  "<<a<<" + "<<b<<" = "<<r;
				}else if(opt=='-'){
					r=a-b;
					cout<<"\n\t\t\t  "<<a<<" - "<<b<<" = "<<r;
				}else if(opt=='*'){
					r=a*b;
					cout<<"\n\t\t\t  "<<a<<" * "<<b<<" = "<<r;
				}else if(opt=='/'){
					r=a/b;
					cout<<"\n\t\t\t  "<<a<<" / "<<b<<" = "<<r;
				}else{
					cout<<"\a\a\n\t\t   You entered wrong operator!!!\n\n\t\t   Please try again.";
				    getch();	goto Again;
				}
				cout<<"\n\t\t_______________________________________________";
				
		}else if(op==3){
			
			cout<<fixed<<setprecision(2);
			cout<<"\n\t\t_______________DISPLAY DATA_______________\n";
			cout<<"\n\t\t    -> Your data: a = "<<a<<" ,  b = "<<b;
			cout<<"\n\n\t\t\tRESULT : "<<a<<" "<<opt<<" "<<b<<" = "<<r;
			cout<<"\n\t\t___________________________________________";
			
		}else if(op==4){
			cout<<"\n\n\t\tEnded Program!!!\n\n\t\t\3 THANK YOU \3\n\n\n"; system("Color A0");
			exit(0);
		}
		else{
			system("Color 4");
			cout<<"\a\a\n\n\n\n\t\t       INVALID OPTION!!!";
		}

		cout<<"\n\n\t\t  >> Press 'ENTER' to continue... ";
		getch();
	}while(true);
	       

	
	getch();  return 0;
}