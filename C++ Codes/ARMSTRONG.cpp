// Q.8) WRITE A PROGRAM TO CHECK THE GIVEN NUMBER IS ARMSTRONG OR NOT....
#include<iostream>
using namespace std;
int main(){
	int x, remainder,sum;
	int n;
	
	cout<<"Enter the Number :";
	cin>>n;
	
	x=n;
	sum=0;
	while(n!=0)
	{
		remainder = n%10;
		sum = sum + (remainder*remainder*remainder);
		n = n/10;
	}
	
	if(sum==x)
	{
		cout<<"Number is Armstrong\n";
	}
	else
	{
		cout<<"Number is Not Armstrong\n";
	}
	
}