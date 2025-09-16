#include<iostream>
using namespace std;

class BankAccount{
	protected:
	string accountHolder;
	int accountNumber;
	
	public:
	void getDetails(string s, int n){
		accountHolder = s;
		accountNumber = n;
	}	
	
	void displayDetails(){
		cout<<"Account Holder Name is : "<<accountHolder<<endl;
		cout<<"Account Number is : "<<accountNumber<<endl;
	}
	
};
int main(){
	BankAccount ac;
	ac.getDetails("YashPatil",12345);
	ac.displayDetails();
	return 0;
}