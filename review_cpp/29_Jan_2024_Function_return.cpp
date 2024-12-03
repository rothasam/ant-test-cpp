#include<iostream>
#include<conio.h>
//#include<iomanip>
using namespace std;

// #1
int sum1(){
	int a=10,b=5;
	
//	int sum=a+b;
//	return s;
	return a+b;
}

// #2
int sum2(){
	int a,b;
	cout<<"\nEnter value of a : "; cin>>a; fflush(stdin); cin.clear();
	cout<<"\nEnter value of b : "; cin>>b; fflush(stdin); cin.clear();
	return a+b;
	
}
// syntax of calling : FunctionName();



int main()
{	
	cout<<sum1();
	cout<<sum2() ;
	
	
	getch(); return 0;
}