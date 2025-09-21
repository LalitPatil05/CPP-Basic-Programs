#include<iostream>
using namespace std;
class value {
	private:
		int a,b;
	public:
		value(){
			a=10;
			b=20;
		}
		value(int x){
			a=x;
			b=NULL;
		}
		value(int x, int y){
			a=x;
			b=y;
		}
		void display(){
			cout<<"A="<<a<<endl;
			cout<<"B="<<b<<endl;
		}
};
int main(){
	value v1,v2(34),v3(59,95);
	cout<<"First object :"<<endl;
	v1.display();
	cout<<"Secoond object value is: "<<endl;
	v2.display();
	cout<<"Third object value is: "<<endl;
	v3.display();
}