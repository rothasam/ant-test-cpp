#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
	int num;
	cout<<"\n\tEnter number : "; cin>>num;
	if(num%2==0) cout<<"\n\tit is an even number";
	else cout<<"\n\tit is an odd number"<<endl;
	
	getch(); return 0;
}