#include<iostream>
using namespace std;

int main(){
	int num=123;
	int remainder;
	int revnumber=0;
	
	do{
		remainder = num % 10;
		revnumber = revnumber*10+remainder;
		num/=10;
	}while(num!=0);
	
	cout<<"Reverse Number is : "<<revnumber<<endl;
}