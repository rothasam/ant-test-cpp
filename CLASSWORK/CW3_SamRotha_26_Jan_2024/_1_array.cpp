#include<iostream>
#include<conio.h>
#include<windows.h>
using namespace std;

int main()
{
	system("Color 2");
	int n,arr[20];
	cout<<"\n\t\tEnter n : "; cin>>n;  fflush(stdin);cin.clear();
	for(int i=0;i<n;i++){
		cout<<"\n\t\t Input Aarry["<<(i+1)<<"] : "; cin>>arr[i];   fflush(stdin);cin.clear();
	}
	cout<<"\n\t\t  Your Element: ";
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	
	cout<<"\n\n\t\tEven Number of Array = ";
	for(int i=0;i<n;i++){
		if(arr[i]%2==0){
			cout<<arr[i]<<"  ";
		}
	}
	
	
	cout<<"\n\n\t\tOdd Number of Array = ";
	for(int i=0;i<n;i++){
		if(arr[i]%2!=0){
			cout<<arr[i]<<"  ";
		}
	}

	
	
	getch(); return 0;
}