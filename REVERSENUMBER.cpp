// Q.9) WRITE A PROGRAM TO PRINT REVERSE NUMBER OF GIVEN NUMBER...
#include<iostream>
using namespace std;
int main(){
	int n;
	int remainder;
	int revnumber=0;
	
	cout<<"Enter the Number :";
	cin>>n;
	
	while(n!=0)
	{
		remainder = n%10;
		revnumber = revnumber * 10 + remainder;
		n /= 10;
	}
	
	cout<<"Reversed Number :"<<revnumber;
}