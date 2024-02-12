// using setfill manipulators in C++......
#include<iostream>
#include<cstdlib>
#include<iomanip>
using namespace std;
int main(){
	//variable decleration
	int number1, number2, total;
	//variable intitializaton
	number1=100;
	number2=345;
	//expression
	total=number1 + number2;
	cout<<endl;
	// print the value for using manipulators
	cout<<setfill('*')<<endl;
	cout<<setw(5)<<number1<<"+"<<setw(5)<<number2<<"="<<setw(6)<<total<<endl;
	
}