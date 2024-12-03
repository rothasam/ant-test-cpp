#include<iostream>
#include<conio.h>
#include<windows.h>
#include<iomanip>
using namespace std;

class Student{
	private:
		string id,name,sex;
		float csh,cpp,html,css,total,avg;
		char grade;
		
	public:
		
		void input(int num){
					cout<<"\n\t==================== STUDENT[#"<<num+1<<"] ====================\n";
					cout<<"\n\t\t        + Enter ID    :  "; getline(cin,id);     fflush(stdin); cin.clear();
					cout<<"\n\t\t        + Enter Name  :  "; getline(cin,name);   fflush(stdin); cin.clear();
					cout<<"\n\t\t        + Enter Sex   :  "; getline(cin,sex);    fflush(stdin); cin.clear();
					
	//Check if score not a number or it a negative or bigger than 100
	
					cout<<"\n\t\t        + Enter Score : \n"; 
			inputCSH:
					do{
						fflush(stdin); cin.clear();
						cout<<"\n\t\t\t        - C#   =  ";
					}while(!(cin>>csh)); fflush(stdin); cin.clear();
			if(csh<0 || csh>100) goto inputCSH;
			
			inputCPP:	
					do{
						fflush(stdin); cin.clear();
						cout<<"\n\t\t\t        - CPP  =  ";
					}while(!(cin>>cpp)); fflush(stdin); cin.clear();
			if(cpp<0 || cpp>100) goto inputCPP;
			
			inputHTML:
					do{
						fflush(stdin); cin.clear();
						cout<<"\n\t\t\t        - HTML =  ";
					}while(!(cin>>html)); fflush(stdin); cin.clear();
			if(html<0 || html>100) goto inputHTML;
			
			inputCSS:
					do{
						fflush(stdin); cin.clear();
						cout<<"\n\t\t\t        - CSS  =  ";
					}while(!(cin>>css)); fflush(stdin); cin.clear();
			if(css<0 || css>100) goto inputCSS;
			
					system("cls");
		}
		
		float totalSub(float s1,float s2,float s3,float s4){
			return s1+s2+s3+s4;
		}
		float avgSub(float s1,float s2,float s3,float s4){
			return (s1+s2+s3+s4)/4;
		}
		char gradeStu(float avg){
			if(avg>=90.00 && avg<=100.00) grade = 'A';
			else if(avg>=80.00 && avg<=89.99) grade = 'B';
			else if(avg>=70.00 && avg<=79.99) grade = 'C';
			else if(avg>=60.00 && avg<=69.99) grade = 'D';
			else if(avg>=50.00 && avg<=59.99) grade = 'E';
			else if(avg<=49.99) grade = 'F';
			return grade;
		}
		
	//	float getAvg()const{ return avg; }
		
		void output(){
			cout<<fixed<<setprecision(2);
			cout<<setw(10)<<id<<setw(10)<<name<<setw(10)<<sex<<setw(10)
					<<csh<<setw(10)<<cpp<<setw(10)<<html<<setw(10)<<css<<setw(10)
					<<totalSub(csh,cpp,html,css)<<setw(10)<<avgSub(csh,cpp,html,css)<<setw(10)<<gradeStu(avgSub(csh,cpp,html,css))<<endl;
		}
};

//global function
void header(){
	cout<<"\n\n"<<setw(10)<<"ID"<<setw(10)<<"NAME"<<setw(10)<<"SEX"<<setw(10)<<"C#"<<setw(10)<<"CPP"<<setw(10)<<"HTML"
			<<setw(10)<<"CSS"<<setw(10)<<"TOTAL"<<setw(10)<<"AVG"<<setw(10)<<"GRADE";
	cout<<"\n      ================================================================================================\n\n";
}



int main()
{
	int n;
	char answer;
	Student stu[20];
	

	do{
	//check if n not number or bigger than size of array 
		START:
		INPUT:
			system("color 8");
		cout<<"\n\n\n\t\t  -> Enter amount of student(<=20)  : ";
		while(!(cin>>n)){
			system("color 4");
			fflush(stdin); cin.clear();
			cout<<"\n\t\t     >>> TRY AGAIN!!!"; getch();  system("cls"); goto INPUT;
		}
		
		fflush(stdin); cin.clear();
		if(n<=0 || n>20 ) goto START;
		system("cls"); system("color 3");
		
		for(int i=0;i<n;i++)  stu[i].input(i);  
		
		header();
		for(int i=0;i<n;i++) stu[i].output();
		cout<<"\n      ------------------------------------------------------------------------------------------------\n";
		
		
		cout<<"\n\n\t\t\t\t     <<< PRESS ANYKEY PLEASE >>>"; getch(); 	system("color 8");
		
	// question asking user to be continue or not	
		do{
			system("cls");
			cout<<"\n\n\n\t\t\t  >>> Do you want to continue the program ? \n";
			cout<<"\n\t\t\t    -> Answer(y/n) : ";  cin>>answer; fflush(stdin); cin.clear();
		}while(answer != 'y' && answer != 'n' && answer != 'Y' && answer != 'N');
		fflush(stdin); cin.clear(); system("cls");
		
		
	}while(answer!='n' && answer!='N');
	
	cout<<"\n\n\n\t\t\t\t     <<< END THE PROGRAM >>>"; Sleep(1500);
	
	
	return 0;
}




