// Demonstration of Scope Resoulation Operator...

int a = 20;  // Global Decleration

#include<iostream>
using namespace std;

int main(){
	int a = 10;  // Local Decleration
	
	cout<<"Value of a is : "<<a; // Local
	cout<<"\nValue of a is : "<<::a; // Global
	
}
