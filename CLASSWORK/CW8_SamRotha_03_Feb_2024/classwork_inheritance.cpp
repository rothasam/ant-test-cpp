#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;

class University{
	private:
		string universityName,locationName,universityTel;
		
	public:
		
		void setUniversityName(string universityName){
			this->universityName=universityName;
		}
		void setLocationName(string locationName){
			this->locationName=locationName;
		}
		void setUniversityTel(string universityTel){
			this->universityTel=universityTel;
		}
		
		string getUniversityName()const{
			return this->universityName;
		}
		string getLocationName()const{
			return this->locationName;
		}
		string getUniversityTel()const{
			return this->universityTel;
		}
		

		
};



class Student : public University{
	private:
		int id;
		string name,address;
	public:
		void setId(int id){
			this->id;
		}
		void setName(string name){
			this->name=name;
		}
		void setAddress(string address){
			this->address=address;
		}
		int getID()const{
			return this->id;
		}
		string getName()const{
			return this->name;
		}
		string getAddr()const{
			return this->address;
		}
		void showStuProfile(){
			cout<<setw(12)<<this->getID()<<setw(12)<<this->getName()<<setw(12)<<this->getAddr()
				<<setw(12)<<getUniversityName()<<setw(12)<<getLocationName()<<setw(12)
				<<getUniversityTel()<<endl;
		}
	
	
};





int main()
{
	int n;
	Student stu[20];
	string universityName,locationName,universityTel;
	int id;
	string name,address;
	
	system("color 2");
	
	INPUT:
		 // check if n not a number or it is a negative
	do{
		fflush(stdin); cin.clear();
		cout<<"\n  Enter number of object (<=20) :  ";  
	}while(!(cin>>n));
	fflush(stdin); cin.clear();
	if(n<=0 || n>20) goto INPUT;
	
	system("cls"); 
	for(int i=0;i<n;i++){
		cout<<"\n\n\n-------------->>> STUDENT[#"<<i+1<<"] <<<-------------\n\n";
		cout<<"  + Enter Univetsity Name : "; getline(cin,universityName);   fflush(stdin); cin.clear();
		cout<<"\n  + Enter Location Name   : "; getline(cin,locationName);     fflush(stdin); cin.clear();
		cout<<"\n  + Enter Univetsity Tel  : "; getline(cin,universityTel);    fflush(stdin); cin.clear();
		   
	inputID:
		do{
			fflush(stdin); cin.clear();
			cout<<"\n  + Enter Student Id      : ";
		}while(!(cin>>id)); 
		fflush(stdin); cin.clear();
		if(id<=0) goto inputID;
		
		cout<<"\n  + Enter Student Name    : "; getline(cin,name);             fflush(stdin); cin.clear();
		cout<<"\n  + Enter Student Address : "; getline(cin,address);          fflush(stdin); cin.clear();
		
		
		stu[i].setUniversityName(universityName);
		stu[i].setLocationName(locationName);
		stu[i].setUniversityTel(universityTel);
		stu[i].setId(id);
		stu[i].setName(name);
		stu[i].setAddress(address);
		system("cls");
	}
	
	
	system("cls"); system("color 5");
	
	cout<<"\n\n\n"<<setw(12)<<"ID"<<setw(12)<<"NAME"<<setw(12)<<"ADDRESS"
				<<setw(12)<<"UNIVERSITY"<<setw(12)<<"LOCATION"<<setw(12)
				<<"TELEPHONE\n";
	cout<<"  -----------------------------------------------------------------------------\n";
	for(int i=0;i<n;i++)   stu[i].showStuProfile();
	
	getch(); return 0;
}