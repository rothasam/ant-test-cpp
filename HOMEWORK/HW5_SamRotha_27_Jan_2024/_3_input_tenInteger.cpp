#include<iostream>
#include<conio.h>
#include<windows.h>
using namespace std;

int main()
{ 
	int n=10,tmp_1,tmp_2;;
	int num[n];
	int max,min,indexMin,indexMax;
	
	cout<<"\n\n\t Let input 10 number of array:\n";
	
	for(int i=0;i<n;i++){
		cout<<"\n\t       -> ["<<(i+1)<<"] : ";
		
	// check if n is not a number then input again
		while(!(cin>>num[i])){ 
			fflush(stdin);cin.clear();
			cout<<"\a\a\n\t       !!!NOT A NUMBER\n";
			--i;    // input again on index which user enter character
			break; // break the loop
		}
		
		fflush(stdin);cin.clear();
	}
	
	
	cout<<"\n\t-----------------------------";
	cout<<"\n\n   <<< PRESS ANYKEY TO DISPLAY DATA >>>"; getch();  system("cls"); system("Color 5");
	
	cout<<"\n\t---------Your Data----------";
	for(int i=0;i<n;i++){
		cout<<"\n\t     + Array ["<<(i+1)<<"] : "<<num[i];  // output
	}
	cout<<"\n\t----------------------------";
	
	
	min=max=num[0];
	cout<<"\n\n    <<< PRESS ANYKEY TO DISPLAY MIN >>>"; getch(); 	
	for(int i=1;i<n;i++){
		if(min > num[i]){
			min = num[i];  indexMin=i;  // find min
		}
		if(max < num[i]){
			max = num[i]; indexMax=i;  // find max
		}
	}
	cout<<"\n\n        => Min is Array ["<<indexMin+1<<"] : "<<min;
	cout<<"\n\n    <<< PRESS ANYKEY TO DISPLAY MAX >>>"; getch(); 	
	cout<<"\n\n        => Max is Array ["<<indexMax+1<<"] : "<<max;
	
	
	
	cout<<"\n\n    <<< PRESS ANYKEY TO DISPLAY SORT >>>"; getch();
	cout<<"\n\n\t=> Sort data by ascending:\n";
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(num[i] > num[j]){ // if num[i] > bigger than next index i+1 or j
				tmp_1=num[i];    // swapping value to another variable
				num[i]=num[j];
				num[j]=tmp_1;
			}
		}
	} 
	for(int i=0;i<n;i++){
		cout<<"\n\t     + Array ["<<(i+1)<<"] : "<<num[i];
	}
	
	
	
	cout<<"\n\n\t=> Sort data by descending:\n";
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(num[i] < num[j]){   
				tmp_1=num[i];
				num[i]=num[j];
				num[j]=tmp_1;
			}
		}
	} 
	for(int i=0;i<n;i++){
		cout<<"\n\t     + Array ["<<(i+1)<<"] : "<<num[i];
	}
	
	
	
	getch(); return 0;
}