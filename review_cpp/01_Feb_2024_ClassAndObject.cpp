#include<iostream>
#include<conio.h>
using namespace std;

/*
class Student{
		int id;  // default is private
	private:
		string name;
	protected:
		string gender;
	public:
		double GPA;	
		
};
*/

class Student{
	private:
		// data member, column, field, global,....
		int id;
		string name;
	public:
		//Method, function member
		void input(){  // sender
			cout<<"\n----------- Fill Information --------------\n";
			cout<<"\n  + Enter ID    :  "; cin>>id; fflush(stdin); cin.clear();
			cout<<"\n  + Enter Name  :  "; getline(cin,name); fflush(stdin); cin.clear();
		}
		
		void display(){ // receievre
			  cout<<"\n------------- Student Information --------------\n";
			  cout<<"\n   -> ID   :  "<<id;
			  cout<<"\n\n   -> NAME :  "<<name;
		}
		
};



int main()
{
/*
	Student p1;
//	p1.id = 1234;  // cannot set it value directly cuz it's private

//	p1.name="Ms. Rotha";  // also error

//	p1.gender = "Female"; // also error

	p1.GPA = 4.0;  // no erorro cuz its specifier is a public
	 
	cout<<"\nGPA = "<<p1.GPA<<endl;
	//change value
	cout<<"Input GPA : ";
	cin>>p1.GPA;
	cout<<"\nGPA = "<<p1.GPA;
*/
	
	// normal object
	Student stu;
	stu.input();
	stu.display();

	cout<<"\n\n   <<< PRESS ANYKEY TO CONTINUE >>>"; getch(); system("cls");
	
	// Array object
	int n;
	Student s[20];
	cout<<"\n  +  Enter numbers of Student(1-20) : "; cin>>n; fflush(stdin); cin.clear();
	
	for(int i=0;i<n;i++)  s[i].input();
	for(int i=0;i<n;i++)  s[i].display();
	

	
	getch(); return 0;
}