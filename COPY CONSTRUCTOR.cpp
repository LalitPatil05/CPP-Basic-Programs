#include<iostream>
using namespace std;
class value {
	private:
		int a,b;
	public:
		value(int x, int y){
			a=x;
			b=y;
		}
		value(value &k){
			a=k.a;
			b=k.b;
		}
		void display(){
			cout<<a<<endl;
			cout<<b<<endl;
		}
};
int main(){
	value v1(50,100);
	value v2(v1);//by argument..
	value v3=v1;//by assignment..
	cout<<"First object value is: "<<endl;
	v1.display();
	cout<<"Secoond object value is: "<<endl;
	v2.display();
	cout<<"Third object value is: "<<endl;
	v3.display();
	
}