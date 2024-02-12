#include<iostream>
using namespace std;
class number {
	private:
		static int a;//static data....
		int b;//normal data...
	public:
		static void print1(){
			cout<<"A="<<a<<endl;
		}
		void print2(){
			b=100;
			cout<<"B="<<b<<endl;
		}
};
int number ::a=10;
int main(){
	number n1;
	//calling by object.....
	n1.print1();
	//calling by class(because a is static)
	number :: print1();
	
	//here b is normal function.....
	n1.print2();	
}