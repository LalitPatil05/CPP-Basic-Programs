//using setpricison manipulator in C++....
#include<iostream>
#include<cstdlib>
#include<iomanip>
using namespace std;
int main(){
	//variable declearion
	float number1;
	//variable initialization
	number1 = 34.3358;
	//display the values foe using setpricision manipulator in C++..
	cout<<number1<<endl;
	cout<<setprecision(2)<<number1<<endl;
	cout<<setprecision(3)<<number1<<endl;
}