#include<iostream>
#include<conio.h>
#include<cmath>  // pow();
#include<windows.h>
using namespace std;

int main()
{
	int n,s=0;
	
	system("Color 5");
	cout<<"\n\n\n\t\t---------->>> CALCULATE ADDITION OF SEQUENCE <<<----------";
	cout<<"\n\n\t\t\t\t=> Enter n : "; cin>>n;  fflush(stdin);cin.clear();
	
	cout<<"\n\t\t\ts = ";
	for(int i=0;i<=n;i++){
		cout<<pow(4,i)<<" + ";
		s+=pow(4,n-i);
	}
	
	cout<<"\b\b = "<<s;
	cout<<"\n\n\t\t----------------------------------------------------------";

	cout<<"\n\n\t\t\t\t   \3 THANK YOU \3\n\n";

    getch(); return 0;
}