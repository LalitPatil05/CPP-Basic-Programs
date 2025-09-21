#include<iostream>
using namespace std;
class dynamiccons{
	private:
		int *p;
	public:
		dynamiccons(){
			p=new int;
			*p=100;
		}
		dynamiccons(int v){
			p=new int;
			*p=v;
		}
		void display(){
			cout<<*p<<endl;
		}
};
int main(){
	dynamiccons d1,d2(500);
	cout<<"First pointer object value :";
	d1.display();
	cout<<"Second pointer object value :";
	d2.display();
}