#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	
	for(int i=1;i<=3;i++){ //heigh
		for(int j=1;j<=10;j++){ //length
			cout<<"# "; 
		}
		cout<<"\n";
	}
	
	cout<<"\n\n";
	 
	for(int i=1;i<=3;i++){
		for(int j=1;j<=10;j++){
			if(i==1 || i==3 || j==1 || j==10)  // space
				cout<<"# ";
			else
				cout<<"  "; // 2 space
		} 
		cout<<"\n";
	}
	
	cout<<"\n\n";
	
	for(int i=5;i>=1;i--){
		for(int j=1;j<=i;j++){
			cout<<j;
		}
		cout<<"\n";
	}
	
	getch();
	return 0;
}