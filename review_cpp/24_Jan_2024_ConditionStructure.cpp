#include<iostream>
#include<conio.h> // getch(
using namespace std;

int main()
{
	int a,b,c,max;
	cout<<"\nEnter value of a : "; cin>>a;  fflush(stdin); cin.clear();  // prevent when we enter character instead of number(mean wrong datatype => skip one line) 
	cout<<"\nEnter value of b : "; cin>>b;  fflush(stdin); cin.clear();
	cout<<"\nEnter value of c : "; cin>>c;  fflush(stdin); cin.clear();
	max=a;
	if(max<b) max=b;
	if(max<c) max=c;
	
	cout<<"\nMax  =  "<<max<<endl;
	
	getch(); return 0;
}