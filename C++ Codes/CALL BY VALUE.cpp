#include<iostream>
using namespace std;
int swap(int a,int b);// function decleration..
// function defination..
int swap(int a, int b){
	int temp;
	temp=a;
	a=b;
	b=temp;
}
int main(){
	int a=10,b=20;
	
	cout<<"before swaping value of a is :"<<a<<"\n";
	cout<<"before swaping value of b is :"<<b<<"\n";
	
	swap(a,b); //function calling....
	
	cout<<"after swaping value of a is :"<<a<<"\n";
	cout<<"after swaping value of b is :"<<b<<"\n ";
	
	return 0;
}