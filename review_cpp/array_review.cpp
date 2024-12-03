#include<iostream>
#include<conio.h>
#include<iomanip>
#include<windows.h>
using namespace std;

int main()
{

	string id[10],name[10],sex[10];
	float rate[10],hour[10],salary[10];
	char op;
	int n;
	
	
	do{
		system("cls"); system("Color 2");
		cout<<"\n=======>> MENU <<=======";
		cout<<"\n[a]. Input information.";;
		cout<<"\n[b]. Output information";
		cout<<"\n[c]. Search information";
		cout<<"\n[d]. Insert information";
		cout<<"\n======================";
		cout<<"\nChoose option : "; cin>>op; fflush(stdin);cin.clear();
		switch(op){
			case 'a':
				case 'A':{
					cout<<"\nEnter n : "; cin>>n; fflush(stdin);cin.clear();
					for(int i=0;i<n;i++){
						cout<<"\n======>>> INPUT["<<i+1<<"] <<<======"<<endl;
						cout<<"Enter ID     : "; getline(cin,id[i]); fflush(stdin);cin.clear();
						cout<<"Enter Name   : "; getline(cin,name[i]); fflush(stdin);cin.clear();
						cout<<"Enter Sex    : "; getline(cin,sex[i]); fflush(stdin);cin.clear();
						cout<<"Enter Rate   : "; cin>>rate[i]; fflush(stdin);cin.clear();
						cout<<"Enter Hour   : "; cin>>hour[i]; fflush(stdin);cin.clear();
						salary[i] = rate[i]*hour[i];
						cout<<"Your salary  : $"<<salary[i]<<endl;
						cout<<"============================"<<endl;
					} 
					break;
				}
			case 'b':
				case 'B':{
					cout<<"\n==================>>> OUTPUT <<<=================="<<endl<<endl;
					cout<<left<<setw(10)<<"ID"<<left<<setw(10)<<"NAME"<<left<<setw(10)<<"SEX"
						<<left<<setw(10)<<"RATE"<<left<<setw(10)<<"HOUR"<<left<<setw(10)<<"SALARY"<<endl;
						cout<<"\n================================================================\n";
					for(int i=0;i<n;i++){
						cout<<left<<setw(10)<<id[i]<<left<<setw(10)<<name[i]<<left<<setw(10)<<sex[i]
						<<left<<setw(10)<<rate[i]<<left<<setw(10)<<hour[i]<<left<<setw(10)<<salary[i]<<endl;
					}
					break;
				}
			case 'c':
				case 'C':{
					string search;
					int found=0;  // false
					cout<<"Enter ID for search  :  "; getline(cin,search); fflush(stdin);cin.clear();
					for(int i=0;i<n;i++){
						if(search==id[i]){
							found=1;  //true
							cout<<"\n\nSearch found..\n\n";
							cout<<left<<setw(10)<<"ID"<<left<<setw(10)<<"NAME"<<left<<setw(10)<<"SEX"
								<<left<<setw(10)<<"RATE"<<left<<setw(10)<<"HOUR"<<left<<setw(10)<<"SALARY"<<endl;
							cout<<"\n================================================================\n";
							cout<<left<<setw(10)<<id[i]<<left<<setw(10)<<name[i]<<left<<setw(10)<<sex[i]
								<<left<<setw(10)<<rate[i]<<left<<setw(10)<<hour[i]<<left<<setw(10)<<salary[i]<<endl;
								
						}
					}
					if(found==0) cout<<"\a\a\n\nSearch not found.\n\n";
					break;
				}
				
			case 'd': case 'D':{
				int index;
				do{
					cout<<"Enter index for insert : "; cin>>index; fflush(stdin);cin.clear();
				}while(index>n || index<0);
				cout<<"\n  Let enter new data : \n";
				for(int i=n;i>index;--i){
						id[i]=id[i-1];
						name[i]=name[i-1];
						sex[i]=sex[i-1];
						rate[i]=rate[i-1];
						hour[i]=hour[i-1];
				}
				
				
				cout<<"Enter data at index of["<<(index)<<"] :\n\n";
						cout<<"Enter ID     : "; getline(cin,id[index]); fflush(stdin);cin.clear();
						cout<<"Enter Name   : "; getline(cin,name[index]); fflush(stdin);cin.clear();
						cout<<"Enter Sex    : "; getline(cin,sex[index]); fflush(stdin);cin.clear();
						cout<<"Enter Rate   : "; cin>>rate[index]; fflush(stdin);cin.clear();
						cout<<"Enter Hour   : "; cin>>hour[index]; fflush(stdin);cin.clear();
						salary[index] = rate[index]*hour[index];
						cout<<"Your salary  : $"<<salary[index]<<endl;
				++n; // increse 1 data of information
				cout<<"\n >>> Insert data success.\n\n";
				break;
			}
			default:{
				cout<<"\a\a\nYou entered wrong option\n";
				break;
			}
		}
		getch();
	}while(true);
	
	
/*
	int n,num[10];
	
	cout<<"Enter n : "; cin>>n;
	cout<<"\n\n => Input number\n";
	for(int i=0;i<n;i++){
		cout<<"Input number : "; cin>>num[i];
	}
	cout<<"\n\n => Output number\n";
	for(int i=0;i<n;i++){
		cout<<"Num : "<<num[i]<<endl;
	}
	int temp;
	cout<<"\n\n => Sort number by ascending\n";
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(num[i]>num[j]){
				temp=num[j];
				num[j]=num[i];
				num[i]=temp;
			}
		}
	}
	for(int i=0;i<n;i++){
		cout<<"Num : "<<num[i]<<endl;
	}
	cout<<"\n\n => Sort number by descending\n";
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(num[i]<num[j]){
				temp=num[j];
				num[j]=num[i];
				num[i]=temp;
			}
		}
	}
	for(int i=0;i<n;i++){
		cout<<"Num : "<<num[i]<<endl;
	}
	
	int search,found=0;
	cout<<"\n\n => Enter number for search : "; cin>>search;
	
	for(int i=0;i<n;i++){
		if(search==num[i]){
			found=1;
			cout<<search<<" is found"<<endl;
		}
	}
	if(found==0) cout<<search<<"is not found."<<endl;
*/
	
	
	
	
//	string id[5];
//	char name[10][5];
//	char sex[5];
//	int n;
//	
//	cout<<"Enter n :  "; cin>>n; fflush(stdin);cin.clear();
//	cout<<"\n---------------- INPUT ----------------\n";
//	for(int i=0;i<n;i++){
//		cout<<"Enter ID     :  "; getline(cin,id[i]);   fflush(stdin);cin.clear();
//		cout<<"Enter Name   :  "; cin.get(name[i],10); fflush(stdin);cin.clear();
//		cout<<"Enter Sex    :  "; cin>>sex[i];     fflush(stdin);cin.clear();
//	}
//	
//	cout<<"\n\n--------------- OUTPUT ---------------\n";
//	cout<<left<<setw(10)<<"ID"<<left<<setw(10)<<"NAME"<<"SEX\n";
//	for(int i=0;i<n;i++){
//		cout<<left<<setw(10)<<id[i]<<left<<setw(10)<<name[i]<<left<<setw(10)<<sex[i]<<endl;
//	}
	
	getch(); return 0;
}