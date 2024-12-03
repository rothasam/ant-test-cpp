#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	
	int n;
	cout<<"\n\tEnter elements of array:  "; 
	while(!(cin>>n)){	
		fflush(stdin); cin.clear();
	  	cout<<"\n\tEnter elements of arrays again: ";
	}
	
	//create array
	double nums[n];
	double max,min;
	for(int i=0;i<n;i++){
		cout<<"\n\t + Input value in index ["<<(i+1)<<"] :  ";
		cin>>nums[i]; fflush(stdin); cin.clear();
		
		//check max
		if(i==0) max=nums[0];
		if(nums[i]>max) max=nums[i];
		
		//check min
		if(i==0) min=nums[0];
		if(nums[i]<min) min=nums[i];
	}
	
	
	//print
	cout<<"\n\t------------------ALl Element of Array-------------------\n\t";
	for(int i=0;i<n;i++){
		cout<<nums[i]<<" ";
	}
	
	cout<<"\n\tThe smallest value of array  : "<<min;
	cout<<"\n\tThe biggest value of array   : "<<max;
	
	
	
	
	
	
	getch(); return 0;
}