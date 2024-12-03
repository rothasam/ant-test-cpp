#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
	int n,neg,pos;
	neg=pos=0;
	cout<<"\n  Enter n : "; 

	while(!(cin>>n)){
		fflush(stdin);cin.clear();
		cout<<"\n\a\a  Enter n again!!!";
	}
	int num[n];

	for(int i=0;i<n;i++){
		cout<<"\n  + Input number of index["<<(i+1)<<"] : "; 
		cin>>num[i]; fflush(stdin);cin.clear();
		if(num[i]>=0)  pos++;
		else neg++;
	}
	
	cout<<"\n   => There are "<<neg<<" negative number.\n";
	cout<<"\n   => There are "<<pos<<" positive numebr.";
	
	
	
	
	
	getch(); return 0;
}