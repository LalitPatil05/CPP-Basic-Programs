// Q.10) WRITE A PROGRAM TO CHECK NUMBER IS PALINDROME OR NOT....
#include<iostream>
using namespace std;
int main(){
	int n;
	int num,digit;
	int rev;
	cout<<"Enter the Number :";
	cin>>num;
	
	n=num;
	do
	{
		digit = num%10;
		rev = (rev*10) + digit;
		num = num/10;
	}while(num != 0);
	
	cout<<"The Reverse of the Number is :"<<rev<<endl;
	if(n==rev)
	{
		cout<<"The Number is Palindrome.\n";
	}
	else
	{
		cout<<"The Number is Not a Palindrome.\n";
	}
}