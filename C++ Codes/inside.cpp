#include<iostream>
using namespace std;
class hello{
	// inside class defination.....
	int addition(){
		int a,b,c;
		cout<<"enter the value of a:";
		cin>>a;
		cout<<"enter the value of b:";
		cin>>b;
		
		c=a+b;
		
		cout<<"the sum is :"<<c<<"\n";
	}
};
int main(){
	hello addition;
	addition(hello);
	
}