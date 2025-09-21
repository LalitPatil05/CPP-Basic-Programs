// Q.6) WRITE A PROGRAM T PRINT EVEN ODD NUMBERS FROM 1 TO 20.....
#include<iostream>
using namespace std;
int even(int n);
int odd(int n);
int main(){
	
	int n;
	
	cout<<"-: EVEN NUMBERS ARE FOLLOWINGS :-"<<endl;
	even(n);   // function calling...
	
	cout<<"\n\n\n\n";
	
	cout<<"-: ODD NUMBERS ARE FOLLOWINGS :-"<<endl;
	odd(n);  // function calling......
	
	
}

// function definations....
int even(int n){
	int even;
	for(int i=1;i<=20;i++)
	{
		if(i%2==0){
			cout<<i<<endl;
		}
	}
}

int odd(int n){
	int odd;
	for(int i=1;i<=20;i++)
	{
		if(i%2==1){
			cout<<i<<endl;
		}
	}
}