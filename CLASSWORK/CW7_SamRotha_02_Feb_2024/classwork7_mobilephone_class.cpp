#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;

		
class MobilePhone{
	private:
		string brand,model;
		double price;
	public:
		void setBrand(string brand){
			this->brand =brand;
		}
		void setModel(string model){
			this->model =model;
		}
		void setprice(double price){
			this->price =price;
		}
		string getBrand()const{ return this->brand; }
		string getModel()const{ return this->model; }
		double getPrice()const{ return this->price; }
		
		
		void display(int n){
			cout<<"\n------------>> PRODUCT["<<n+1<<"] <<---------------\n";
			cout<<"\n Brand  : "<<this->getBrand()<<endl;
			cout<<"\n Model  : "<<this->getModel()<<endl;
			cout<<"\n Price  : "<<this->getPrice()<<"$"<<endl;
			cout<<"\n----------------------------------------------\n";
		}
	
};


int main() 
{
	MobilePhone ph[20]; 
	int n;
	string brand,model;
	double price;
		
	cout<<"\n -> Enter n(<=20)  : "; cin>>n; fflush(stdin); cin.clear();


	for(int i=0;i<n;i++){
		cout<<"\n------------>> PRODUCT["<<i+1<<"] <<---------------\n";
		cout<<"\n Enter Brand  : "; getline(cin,brand);  fflush(stdin); cin.clear();
		cout<<"\n Enter Model  : "; getline(cin,model); fflush(stdin); cin.clear();
		cout<<"\n Enter Price  : "; cin>>price; fflush(stdin); cin.clear();
		
		ph[i].setBrand(brand);
		ph[i].setModel(model);
		ph[i].setprice(price);
		system("cls");
	}
	cout<<fixed<<setprecision(2);
	for(int i=0;i<n;i++){
		ph[i].display(i); 
	}
		
	
	
	
	getch(); return 0;
}