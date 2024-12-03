#include<iostream>
#include<conio.h>
#include<windows.h>
using namespace std;

int main()
{
	int n=52;
	char arr[n];
	
	system("Color D");
	for(char i=0; i<(n/2) ; ++i){
		
		arr[i] = 'a' + i;         // store lowercase 0-25
		arr[(n/2) +i] = 'A' + i;  // store uppercase 26-51
		
	}
	
	//display data
	
	cout<<"\n\n\t\t  >>> Display lowercase and uppercase <<<\n\n";
	for(int i=0;i<n/2;++i){
		
		cout<<"\t\t\t\t"<<arr[i]<<"  "<<arr[(n/2) + i]<<"  "<<arr[i+1]<<"  "<<arr[(n/2) + i + 1]<<endl;
		
		i++;
		
	}
	
	
	getch(); return 0;
}