#include<iostream>
using namespace std;
class number{
	private:
		static int a;//static member data...
		int b;
	public:
		void getdata(){
			a=10;
			b=20;
			a++;
			b++;
		}
		void display(){
			cout<<a<<endl<<b<<endl;
		}
};
int number :: a=0;//initialization of static member data....
int main(){
	number n1,n2;
	n1.getdata();
	n2.getdata();
	n1.display();
	n2.display();
}