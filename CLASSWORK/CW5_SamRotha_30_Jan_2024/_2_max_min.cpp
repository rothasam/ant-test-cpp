#include<iostream>
#include<conio.h>
using namespace std;

int max(int arr){
	int max=0;
	if(max<arr) max=arr;
	return max;
}

int min(int arr){
	int min=0;
	if(min>arr) min=arr;
	return min;
}


int main()
{
	int n=3;
	int num[n];
	int maxx=0,minn=0;
	for(int i=0;i<n;i++){
	go:
		cout<<"\n  Enter  : "; 
		while(!(cin>>num[i])){
			fflush(stdin); cin.clear(); 
			cout<<"\a\a\n   >>> Not a number.\n";
			goto go;
		}
	}
	
	for(int i=0;i<n;i++){
		if(maxx<max(num[i])){
			maxx=num[i];
		}
	}
	 cout<<"\nMin is "<<maxx<<endl;
	 
	 for(int i=0;i<n;i++){
		if(minn<min(num[i])){
			minn=num[i];
		}
	}
	 cout<<"\nMin is "<<minn<<endl;
	
	
	
	getch(); return 0;
}