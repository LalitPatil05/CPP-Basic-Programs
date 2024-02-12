#include<iostream>
using namespace std;
int main(){
	int num;
	int denum;
	int output;
	
	cout<<"Enter the value of a :";
	cin>>num;
	cout<<"Enter the value of b :";
	cin>>denum;
	
	try{
		if(denum==0){
			throw denum;
		}
		else{
			output=num/denum;
		}
	}
	catch(int d){
		cout<<"Do not enter the 0 is denominator"<<endl;
	}
	cout<<"Final output is :"<<output<<endl;
}