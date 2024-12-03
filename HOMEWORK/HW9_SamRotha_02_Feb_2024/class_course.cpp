#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;

class Course{
	private:
		string name;
		float price;
		int discount;
		
	public:
		void setName(string name){
			this->name=name;
		}
		void setPrice(float price){
			this->price=price;
		}
		void setDiscount(int discount){
			this->discount=discount;
		}
		string getName()const{ return this->name; }
		float getPrice()const{ return this->price; }
		int getDiscount()const{ return this->discount; }
		
		double getPayment(){ 
			return this->price - this->price*(this->discount/100.00); 
		}
		
		void showCourseProfile(){
			cout<<fixed<<setprecision(2);
			cout<<"\t\t"<<setw(12)<<getName()<<setw(11)<<getPrice()<<"$"<<setw(11)<<getDiscount()
				<<"%"<<setw(11)<<getPayment()<<"$"<<endl;
		}
};

void Header(){
	cout<<"\n\n\t\t"<<setw(12)<<"NAME"<<setw(12)<<"PRICE"<<setw(12)<<"DISCOUNT"<<setw(12)<<"PAYMENT"<<endl;
	cout<<"\t\t -------------------------------------------------------\n";
}


int main()
{
	string name;
	float price;
	int discount;
	
	Course c[30];
	int n;
	char ans;

	
	do{
		START:
		INPUT:
			system("color F");
		cout<<"\n\n\t  -> Enter amount of course(<=30)  : ";
		while(!(cin>>n)){  // if n not a number
			system("color 4");
			fflush(stdin); cin.clear();
			cout<<"\n\t     TRY AGAIN!!!"; getch();  system("cls"); goto INPUT;
		}
		
		fflush(stdin); cin.clear();
		if(n<=0 || n>30 ) goto START;     // if n is negative or equla zero
		system("cls");   system("color F");
	
		
		for(int i=0;i<n;i++){
			cout<<"\n\t================= COURSE[#"<<i+1<<"] ====================\n";
			cout<<"\n\t\t  + Enter Name         :  "; getline(cin,name); fflush(stdin); cin.clear();
			
		// check price and dis if it not a number or dis is bigger than 100 or it a negative	
			AGAIN:
				do{
					fflush(stdin); cin.clear();
					cout<<"\n\t\t  + Enter Price($)     :  "; 
				}while(!(cin>>price));  fflush(stdin); cin.clear();
				if(price<=0) goto AGAIN;
				
			DisAgain:
				do{
					fflush(stdin); cin.clear();
					cout<<"\n\t\t  + Enter Discount(%)  :  "; 
				}while(!(cin>>discount));  fflush(stdin); cin.clear();
				if(discount<=0.00 || discount >100.00) goto DisAgain;
		
		// set data to class data member by set function
			c[i].setName(name);
			c[i].setPrice(price);
			c[i].setDiscount(discount);
			system("cls");
		}
		
		Header();
		for(int i=0;i<n;i++) {
			c[i].showCourseProfile();
		}
		
		cout<<"\n\n\n\t\t\t       >>> PRESS ANYKEY TO NEXT <<<"; getch(); system("cls");
			

 	// ask user if they want to continue the program
		do{
			system("cls");
			cout<<"\n\n\n\t  >>> Do you want to continue the program ?\n";
			cout<<"\n\t    -> Answer(y/n) : ";  cin>>ans; fflush(stdin); cin.clear();
			
		}while(ans != 'y' && ans != 'n' && ans != 'Y' && ans != 'N');
		fflush(stdin); cin.clear(); system("cls");
		
		
	}while(ans!='n' && ans!='N');

	cout<<"\n\t\t\3 THANK YOU \3\n";
	
	return 0;
}