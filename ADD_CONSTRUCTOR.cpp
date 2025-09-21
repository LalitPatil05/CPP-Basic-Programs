#include<iostream>
using namespace std;
class add{
	public:
		int a,b,c; // data members..
		
		add(){ // cosnstructor decleration...
			a=5;
			b=7;
			c = a + b;
			cout<<"Sum is : "<<c<<endl;
		}
};

	int main(){
		add a1;
	}