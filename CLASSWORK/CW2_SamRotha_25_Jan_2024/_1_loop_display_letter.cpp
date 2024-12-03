#include<iostream>
#include<conio.h>
#include<windows.h>
using namespace std;

int main()
{
	system("Color 2");
	char ch1='a';
	
	cout<<"\n\t--------------------------------------------------------------------\n\t\t";
	cout<<"\n\t\t\t\t >>> LOOP [a-z] <<<\n\n\t\t";
	for(int i=1;i<=26;i++){
		cout<<ch1<<" ";
		ch1++;
	}
	char ch2='z';
	cout<<"\n\n\n\t\t\t\t >>> LOOP [z-a] <<<\n\n\t\t";
	for(int i=26;i>=1;i--){
		cout<<ch2<<" ";
		ch2--;
	}
	cout<<"\n\n\t--------------------------------------------------------------------\n\t\t";
	
	
	
	
	getch(); return 0;
}