#include<iostream>
using namespace std;
int main(){
	int divisor;
	int dividend;
	int quotient;
	int remainder;
	int gcd;
	
	cout<<"enter the divisor:";
	cin>>divisor;
	cout<<"enter the dividend:";
	cin>>dividend;
	
	quotient = dividend/divisor;
	cout<<"Quotient is :"<<quotient<<"\n";
	
	remainder = dividend%divisor;
	cout<<"Remainder is :"<<remainder<<"\n";
	
	
	dividend =  divisor * quotient + remainder;
	cout<<"Dividend is :"<<dividend<<"\n";
	
	if(remainder != 0){
		gcd = quotient * divisor + remainder;
	}
	
	cout<<"gcd is :"<<gcd<<"\n";
}