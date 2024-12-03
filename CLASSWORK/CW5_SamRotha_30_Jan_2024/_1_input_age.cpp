#include<iostream>
#include<conio.h>
using namespace std;

string vote(int age){
	string str1= ">>> This age is not allow to vote.";
	string str2= ">>> This age is allow to vote.";
	if(age<18){
		return str1;
	}else{
		return str2;
	}
	
}



int main()
{
	int age;
thiss:
	cout<<"\n  Enter age : "; 
	while(!(cin>>age)){
		fflush(stdin); cin.clear(); 
		cout<<"\a\a\n   >>> Not a number.\n";
		goto thiss;
	}
	fflush(stdin); cin.clear(); 
	
	cout<<vote(age);
	
	getch(); return 0;
}