#include<iostream>
using namespace std;
int fact(int n);// function decleration.......
int fact (int n){// function defination.....
	if(n==0)
	{
		return 0;
	}
	else if(n==1)
	{
		return 1;
	}
	else{

	int factnm=fact(n-1)*n; // recursion code.....
	return factnm;
	}
}
	int main(){
		int n;
		cout<<"enter the Number :";
		cin>>n;
		int f;
		f=fact(n);// function calling......
		cout<<"factorial is :"<<f<<"\n";
	}
	
	