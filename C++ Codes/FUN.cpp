#include<iostream>
using namespace std;
int add(int a, int b);
// FUNCTION IN C++ LANGUAGE..........
	int main()
	{
		int a,b;
		cout<<"enter the value of a:";
		cin>>a;
		cout<<"enter the value of b:";
		cin>>b;		
		int sum;		
		sum=add(a,b);	
		cout<<"sum is :"<<sum;		
	}
// function defination.....
	int add(int a, int b)
	{
		int c;
		c=a+b;
		return c;
	}