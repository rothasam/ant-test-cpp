#include<iostream>
#include<conio.h>
#include<windows.h>
#include<iomanip>
using namespace std;

	string name[50];
	int qty[50];
	float price[50],total[50],dis[50];
	float lastTotal;


float discount(float t){
	float dis=0.00;
	
	if(t<200.00 && t>=0)        dis = 0.01;   // 1%
	else if(t>=200.00 && t<=499.99)  dis = 0.02; // 2%
	else if(t>=500.00 && t<=999.99) dis = 0.03;
	else if(t>=1000.00 && t<=1499.99) dis = 0.04;
	else if(t>=1500.00) dis = 0.05;
	
	return dis;
}

float Total(float q,float p){
	return q*p;
}
float payment(float t){
	return t-(t*(discount(t)));
}

void inputDATA(int n){
	
	lastTotal=0.00; 
  system("cls");
	for(int i=0;i<n;i++){
		system("Color 2");
		cout<<"\n\t\t=============== PRODUCT[#"<<i+1<<"] ===============\n\n";
		cout<<"\t\t\tInput Name     :  "; getline(cin,name[i]); fflush(stdin); cin.clear();
	tryQty:
		do{
			cout<<"\t\t\tInput Quantity :  ";   fflush(stdin); cin.clear();
		}while(!(cin>>qty[i]));        fflush(stdin); cin.clear(); if(qty[i]<=0) goto tryQty;
			
	tryP:
		do{
			cout<<"\t\t\tInput Price    :  ";   fflush(stdin); cin.clear();
		}while(!(cin>>price[i]));   fflush(stdin); cin.clear(); if(price[i]<=0) goto tryP;
					
		cout<<fixed<<setprecision(2);
		cout<<"\t\t\tTotal          :  "<<Total(qty[i],price[i])<<"$"<<endl;
		cout<<"\t\t\tDiscount       :  "<<discount(Total(qty[i],price[i]))*100<<"%"<<endl;
		cout<<"\t\t\tPayment        :  "<<payment(Total(qty[i],price[i]))<<"$";
		cout<<"\n\t\t___________________________________________\n";
			lastTotal = lastTotal + payment(Total(qty[i],price[i]));  
	}	
	cout<<"\n\n\t\t     <<< PRESS ANYKEY TO CONTINUE >>>"; 
	
}


int main()
{
	int n=0;
	char op;
	
	
	do{
		system("cls"); system("Color E");
		cout<<"\n\t\t   _______________ MENU _______________\n";
		cout<<"\n\t\t\t[a]. Input Product.";
		cout<<"\n\t\t\t[b]. Display Product.";
		cout<<"\n\t\t\t[c]. Exit Program";
		cout<<"\n\t\t   ____________________________________";
		cout<<"\n\n\t\t          >>> Enter Option : "; cin>>op;   fflush(stdin); cin.clear(); 
		
		switch(op){
			
			case 'a': case 'A':{ 
			tryN: 
			INPUT:  
			   system("Color E");
				cout<<"\n\n\t\t      -> Enter number of product : "; 	
				while(!(cin>>n)){  	
					fflush(stdin); cin.clear();  system("Color C0"); 
					cout<<"\n\a\a\t\t\t      TRY AGAIN!!!!";  getch();
			goto INPUT;
				}
				fflush(stdin); cin.clear(); 
			if(n<=0) goto tryN;
				
				inputDATA(n); // calling void()
				
				break;
			}
			
			case 'b': case 'B':{
				if(n>=1){
				    system("cls");	system("Color 3");
				    cout<<"\n\n\nNAME\t\tQTY\t\tPRICE\t\tTOTAL\t\tDIS\t\tPAYMENT\n";
				    cout<<"________________________________________________________________________________________\n\n";
				    cout<<fixed<<setprecision(2);
				    for(int i=0;i<n;i++){
				    	cout<<left<<setw(16)<<name[i]<<left<<setw(16)<<qty[i]<<"$"<<left<<setw(15)<<price[i]
				    		<<"$"<<left<<setw(15)<<Total(qty[i],price[i])<<"%"<<left<<setw(15)
				    		<<discount(Total(qty[i],price[i]))*100<<"$"<<left<<setw(15)<<payment(Total(qty[i],price[i]))<<endl;
					}
					cout<<"________________________________________________________________________________________\n";
					cout<<"\n\t\t\t\t\t\t\t\t\t\t$"<<lastTotal;
				
				}else{
					system("Color C0");
					cout<<"\a\a\n\a\a\t\t\t         NO DATA!!";
					cout<<"\n\t\t        >>> Plese goto option 'a' first";
				}
				
				break;
			}
			case 'c': case 'C':{
				cout<<"\n\n\t\t\t      \1 THANK YOU \1"; 
				exit(0);
				break;
			}
			default:{
				system("Color C0");
				cout<<"\n\a\a\t\t\t    INVALID OPTION!!!";
				break;
			}
			
		}
		getch();
	}while(1);
	
	
	getch();
	return 0;
}

			
			
