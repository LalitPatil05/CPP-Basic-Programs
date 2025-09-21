#include<iostream>
using namespace std;

int sum(int n);//function decleration....

//function defination.....

int sum(int n){
	int sum=0;
	int i;
	for(i=0;i<=n;i++){
		sum=sum+i;
	}
	
	cout<<"sum is :"<<sum<<"\n";
}

int main(){	
	
	int n;
	cout<<"Enter the Number :";
	cin>>n;
	
	sum(n);// function calling.......
}