#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
	int n,search,found=0;
	cout<<"\n   >>> Enter n : ";
	while(!(cin>>n)){
		fflush(stdin);cin.clear();
		cout<<"\n\a\a  Enter n again!!!\n";
	}
	int num[n];
	
	//input
	for(int i=0;i<n;i++){
		cout<<"\n  + Input array["<<(i+1)<<"] : ";
		cin>>num[i]; fflush(stdin);cin.clear();
	}
	
	//output
	cout<<"\n  >>> OUTPUT ARRAY\n";
	for(int i=0;i<n;i++){
		cout<<"\n  + Array["<<(i+1)<<"] : "<<num[i]; 
	}
	
	
	//search
	
again:
	cout<<"\n\n  >>>Enter number for search : ";  
	cin>>search; fflush(stdin);cin.clear(); 
	for(int i=0;i<n;i++){
		if(search==num[i]){
			found=1;
			cout<<"\n  >>>Search "<<num[i]<<" found at index : "<<i+1;
			cout<<"\n\n >>>Ended program..";
		}
	}
	if(found==0){
		cout<<"\n\a\a  Search not found!!!"; 
		goto again;
	}
	
	
	getch(); return 0;
}