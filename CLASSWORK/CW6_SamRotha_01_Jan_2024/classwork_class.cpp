#include<iostream>
#include<conio.h>
using namespace std;
class Book{
	private:
		string title,writter,type;
		int book_code;
	public:
		
		void input(int i){
			cout<<"\n\n-----------------Record[#"<<i+1<<"]------------------\n";
			cout<<"\n   -> Enter title  : "; getline(cin,title); fflush(stdin); cin.clear();
			cout<<"\n   -> Enter author : "; getline(cin,writter); fflush(stdin); cin.clear();
			cout<<"\n   -> Enter type   : "; getline(cin,type); fflush(stdin); cin.clear();
			cout<<"\n   -> Enter code   : "; cin>>book_code; fflush(stdin); cin.clear();

		}
		void output(int i){
			cout<<"\n\n-----------------Record[#"<<i+1<<"]------------------\n";
			cout<<"\n   -> Title  : "<<title; 
			cout<<"\n   -> Author : "<<writter; 
			cout<<"\n   -> Type   : "<<type; 
			cout<<"\n   -> Code   : "<<book_code; 
		}
		
};

int main()
{
	int n;
	Book b[20];
	cout<<"\n   -> Enter n(<=20) : "; cin>>n;  fflush(stdin); cin.clear();
	for(int i=0;i<n;i++){
		b[i].input(i);
	}
	
	system("cls");
	
	for(int i=0;i<n;i++){
		b[i].output(i);

	}
	getch(); return 0;
}
