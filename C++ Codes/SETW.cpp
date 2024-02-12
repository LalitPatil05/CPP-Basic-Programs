// using setw manipulator in c++.....
#include<iostream>
#include<cstdlib>
#include<iomanip>
using namespace std;
int main(){
	//variable decleration
	int num1 , num2 , total;
	//variable initialization
	num1=100;
	num2=345;
	//expression
	total = num1 + num2;
	//printing output with setw
	cout<<endl;
	cout<<setw(5)<<num1<<"+"<<setw(5)<<num2<<"="<<setw(8)<<total<<endl;
}