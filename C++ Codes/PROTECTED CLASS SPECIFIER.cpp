// using C++ protected access modifier......
#include<iostream>
using namespace std;
//declare parent class
class sample{
	//protected elements..
	protected:
		int age;
};
// declare child class 
class sample child:public sample{
	public:
		void displayage(int a){
			age = a;
		cout<<"age is:"<<age<<endl;
		}
};
int main(){
	int ageinput;
	//declare child class object;
	sample child ;
	cout<<"Enter your age :";
	cin>.ageinput;
	//call child class function...
	//passa ageinput as argument...
	child.displayage(ageinput);
}