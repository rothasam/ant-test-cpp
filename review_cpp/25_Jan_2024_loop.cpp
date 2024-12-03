#include<iostream>
#include<conio.h>
#include<windows.h> // system("cls")
using namespace std;

int main()
{
	system("color 2");
	
	int op;
	
	//do while
	do{
		system("cls");
		cout<<"\n\t_______________MENU_______________";
		cout<<"\n\t[1]. Insert ";
		cout<<"\n\t[2]. View";
		cout<<"\n\t[3]. Quit";
		cout<<"\n\t___________________________________";
		cout<<"\n\tChoose option above : "; cin>>op; fflush(stdin); cin.clear();
		if(op==1){
			cout<<"\n\tInsert is coming";
		}else if(op==2){
			cout<<"\n\tView is coming";
		}else if(op==3){
			system("cls");
			cout<<"\n\t Thank \3\n";
			exit(0);
		}else{
			cout<<"\n\t Warning: Invalid Option1!";
			Sleep(1000);
		}
		
	}while(true);
	
	
	// while loop
//	int num,count=0;
//	cout<<"\n\tEnter number  :  "; cin>>num;
//	while(num!=0){
//		num=num/10;
//		count++;
//	}
//	cout<<"\n\tThere are "<<count<<" digit.\n\n";
	
	// for loop
//	system("color 2");
//	int n;
//	int sum=0;
//	cout<<"\n\tEnter n : "; cin>>n; 
//	cout<<"\t";
//	for(int i=1;i<=n;i++){
//		cout<<i<<" + ";
//		sum+=i;
//	}
//	cout<<"\b\b = "<<sum<<endl;
	 
//	cout<<"\n\n\tIncrease for loop\n\t";
//	for(int i=1;i<=n;i++){
//		cout<<i<<" ";
//	}
//	
//	cout<<"\n\n\tDecrease for loop\n\t";
//	for(int i=n;i>=1;i--){
//		cout<<i<<" ";
//	}
	
	getch(); return 0;
}