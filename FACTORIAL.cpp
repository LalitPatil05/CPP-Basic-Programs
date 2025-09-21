// Q.7) WRITE A C++ PROGRAM TO FIND THE FACTORIAL OF GIVEN NUMBER....
#include<iostream>
using namespace std;
int main(){
	int n;
	int fact=1;
	
	cout<<"Enter the Number :";
	cin>>n;
	
	for(int i=1;i<=n;i++)
	{
		fact=fact*i;
		
	}
	
	cout<<"Factorial is :"<<fact<<endl;
}