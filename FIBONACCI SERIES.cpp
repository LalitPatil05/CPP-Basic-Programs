// Q.15) WRITE A PROGRAM TO THAT ASK THE USER HOW MANY FIBBONACCI NUMBERS TO GENERATE AND
// THEN GENERATES THEM....
#include<iostream>
using namespace std;
int fibo(int n);
int main()
{
	int n;
	int result;
	cout<<"Enter the term Number :";
	cin>>n;
	
	result = fibo(n);
	
	cout<<n<<"th term of Fibonacci Series is :"<<result<<endl;
	
}
// function defination 
int fibo(int n)
{
	
	if(n==0)
	{
		return 0;
	}
	
	else if (n==1)
	{
		return 1;
	}
	
	return fibo(n-1) + fibo(n-2);
}