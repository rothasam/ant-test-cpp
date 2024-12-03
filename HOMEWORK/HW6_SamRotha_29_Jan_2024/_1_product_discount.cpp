#include<iostream>
#include<conio.h>
#include<windows.h>
#include<iomanip>
#include<cstdlib>
using namespace std;


//condition
float discount(float total){
	float dis;
	
	if(total>=30.00 && total<=70.00)        dis = 0.1; // 10%
	else if(total>=90.00 && total<=120.00)  dis = 0.15; // 15%
	else if(total>=150.00 && total<=190.00) dis = 0.25;
	else if(total>=250) dis = 0.35;
	
	return dis;
}

//total price after discount
float priceAfterDis(int totalPaid){
	return totalPaid-(totalPaid*(discount(totalPaid)));
}


int main()
{
	string id[20],name[20];
	int qty[20],n=0;
	char op;
	float price[20],total[20],dis[20];
	
	
	do{
		system("cls"); system("Color 3");
		cout<<"\n\t\t   _______________ MENU _______________\n";
		cout<<"\n\t\t\t[A]. Input Product.";
		cout<<"\n\t\t\t[B]. Display All Product.";
		cout<<"\n\t\t\t[C]. Display Price.";
		cout<<"\n\t\t\t[D]. Exit Program";
		cout<<"\n\t\t   ____________________________________";
		cout<<"\n\n\t\t          >>> Enter Option : "; cin>>op;   fflush(stdin); cin.clear(); 
		
		switch(op){
			
			case 'A': case 'a':{ 
			ENTER:  
			   system("Color 3");
				cout<<"\n\n\t\t      -> Enter number of product : "; 
			// loop for n is not number	
				while(!(cin>>n)){  	
					fflush(stdin); cin.clear();  system("Color 4"); 
					cout<<"\n\a\a\t\t\t      TRY AGAIN!!!!";  getch();
			goto ENTER;
				}
				fflush(stdin); cin.clear();
				
				system("cls");
				for(int i=0;i<n;i++){
					system("Color 2");
					cout<<"\n\t\t>>>>>>>>>>>>>> PRODUCT[#"<<i+1<<"] <<<<<<<<<<<<<<\n\n";
					cout<<"\t\t\tInput ID       :  "; getline(cin,id[i]);   fflush(stdin); cin.clear();
					cout<<"\t\t\tInput Name     :  "; getline(cin,name[i]); fflush(stdin); cin.clear();
			// loop to prevent when input is not a number
					do{
						cout<<"\t\t\tInput Quantity :  ";   fflush(stdin); cin.clear();
					}while(!(cin>>qty[i]));   fflush(stdin); cin.clear();
					do{
						cout<<"\t\t\tInput Price    :  ";   fflush(stdin); cin.clear();
					}while(!(cin>>price[i]));   fflush(stdin); cin.clear();
					cout<<fixed<<setprecision(2);
					
					total[i] = price[i]*qty[i];
					cout<<"\t\t\tTotal          :  "<<total[i]<<"$"<<endl;
					cout<<"\t\t\tDiscount       :  "<<discount(total[i])*100<<"%"<<endl;
					cout<<"\t\t\tPayment        :  "<<priceAfterDis(total[i])<<"$";
					cout<<"\n\t\t_________________________________________\n";
				}
				break;
			}
			
			case 'B': case 'b':{
				if(n>=1){
				    system("cls");	system("Color 3");

					cout<<"\n\n"<<"ID\t  "<<left<<setw(14)<<"NAME"<<left<<setw(13)<<"QTY"<<left<<setw(15)<<"PRICE"<<left<<setw(13)<<"DIS"<<"PAY\n";
						for(int l=0;l<=70;l++)  cout<<"-";
						cout<<"\n"<<fixed<<setprecision(2);
						
					for(int i=0;i<n;i++){
						cout<<left<<setw(10)<<id[i]<<left<<setw(12)<<name[i]<<left<<setw(13)<<qty[i]<<"$"<<left<<setw(15)
							<<price[i]<<"%"<<left<<setw(13)<<discount(total[i])*100<<"$"<<left<<setw(3)<<priceAfterDis(total[i])<<"\n";
						for(int l=0;l<=70;l++)  cout<<"-";
						cout<<"\n";
					}
				}else{
					system("Color 4");
					cout<<"\a\a\n\a\a\t\t\t         NO DATA!!";
					cout<<"\n\t\t        >>> Plese goto option A first";
				}
				
				break;
			}
			case 'C': case 'c':{
				
				if(n>=1){
					 system("cls"); system("Color 3"); 
					int pro=0; // count product
					float allProTotal=0,allProPay=0;
					cout<<"\n\n\t\t************* DISPLAY PRICE *************\n";
					for(int i=0;i<n;i++){
						allProTotal+=total[i];
						allProPay = allProPay + priceAfterDis(total[i]);
						pro++;
					}
					cout<<"\n\t\t      Total your product :  "<<pro;
					cout<<"\n\t\t      Total your price   :  "<<allProTotal<<"$";
					cout<<"\n\t\t      Total your payment :  "<<allProPay<<"$";
					cout<<"\n\n\t\t=========================================";
				}else{
					system("Color 4");
					cout<<"\a\a\n\a\a\t\t\t         NO DATA!!";
					cout<<"\n\t\t        >>> Plese goto option A first";
				}
				
				break;
			}
			case 'D':   {
				cout<<"\n\n\t\t\t      \3 THANK YOU \3"; 
				exit(0);
				break;
			}
			default:{
				system("Color 4");
				cout<<"\n\a\a\t\t\t    INVALID OPTION!!!";
				break;
			}
			
		}
		getch(); //catch screen when loop is about to happen again
	}while(1);
	
	
	
	
	getch();
	return 0;
}

			
			
