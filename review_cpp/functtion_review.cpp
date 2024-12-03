#include<iostream>
#include<conio.h>
#include<iomanip>
#include<cmath>
using namespace std;

int n;

void Enter(){
here:
	cout<<"\n  Enter n : ";
	while(!(cin>>n)){
		fflush(stdin); cin.clear();
		cout<<"\a\a\n  >>>Invalid number!!!\n";
		goto here;
	}
	fflush(stdin); cin.clear();
}
void zero(){
	
}

void add(int n){
	int sum=0;
	for(int i=1;i<=n;i++){
		cout<<i<<" + ";
		sum+=i;
	}
	cout<<"\b\b = "<<sum;
}
int add1(int n){
	int sum=0;;
	for(int i=2;i<=n;i+=2){
		cout<<i<<" + ";
		sum+=i;
	}
	cout<<"\b\b = "<<sum;
	return sum;
}
int addOdd(int n){
	int sum=0;
	for(int i=3;i<=n;i+=3){
		cout<<i<<" + ";
		sum+=i;
	}
	cout<<"\b\b = "<<sum;
	return sum;
}
void add_five(int n){
	int sum=0;
	for(int i=5;i<=n;i+=5){
		cout<<i<<" + ";
		sum+=i;
	}
	cout<<"\b\b = "<<sum;
}
int add_n(int n){
	int sum=0;
	for(int i=n;i>=1;i-=3){
		cout<<i<<" + ";
		sum+=i;
	}
	cout<<"\b\b = "<<sum;
	return sum;
}
void poww(int n){
	int s=0;
	for(int i=1;i<=n;i++){
		cout<<i<<"^2 + ";
		s+=pow(i,2);
	}
	cout<<"\b\b = "<<s;
}
int fac(int n){
	int sum=0,fac=1;
	for(int i=1;i<=n;i++){
		cout<<i<<"! + ";
		fac=fac*i;
		sum+=fac;
	}
	cout<<"\b\b = "<<sum;
	return sum;
}
void add_two(int n){
	int sum=0;
	for(int i=1;i<=n;i++){
		cout<<i<<" + ";
		sum+=i;
		i*=10;
	}
	cout<<"\b\b = "<<sum;
}



int main()
{	
	int op;
	
	
	do{
		system("cls");
		cout<<"\nPlease choose the number of the following.\n";
		cout<<"  [1]. 1 + 2 + 3 + ... + n\n";
		cout<<"  [2]. 2 + 4 + 6 + ... + n\n";
		cout<<"  [3]. 3 + 5 + 7 + ... + n\n";
		cout<<"  [4]. 5 + 10 + 15 + ... +  n\n";
		cout<<"  [5]. n + (n - 3) + 3 + ... + n\n";
		cout<<"  [6]. 1^2 + 2^2 + 3^3 + ... + n\n";
		cout<<"  [7]. 1! + 2! + 3! + ... + n\n";
		cout<<"  [8]. 1 + 11 + 111 + ... + n\n";
		cout<<"\nEnter option : "; cin>>op; fflush(stdin); cin.clear();
		switch(op){
			case 1:{
				Enter();
				add(n);
				break;
			}
			case 2:{
				Enter();
				add1(n);
				break;
			}
			case 3:{
				Enter();
				addOdd(n);
				break;
			}
			case 4:{
				Enter();
				add_five(n);
				break;
			}
			case 5:{
				Enter();
				add_n(n);
				break;
			}
			case 6:{
				Enter();
				poww(n);
				break;
			}
			case 7:{
				Enter();
				fac(n);
				break;
			}
			case 8:{
				Enter();
				add_two(n);
				break;
			}
			default:{
				cout<<"\n\a\a  Error!! you choose wrong option.";
				break;
			}

		}
		
		
		getch();
	}while(1);
	
	
	getch(); return 0;
}