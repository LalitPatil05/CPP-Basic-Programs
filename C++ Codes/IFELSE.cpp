#include<iostream>
using namespace std;
int main()
{
	int n;
	
	cout<<"Enter the age :";
	cin>>n;
	
	if(n<1 || n>150)
	{
		cout<<"invailid age\n";
	}
	
	else if(n<=18)
	{
		cout<<"Not Eligible for Voting\n";
	}	
	
	else
	{
		cout<<"Eligible for Voting\n";
	}
	

}