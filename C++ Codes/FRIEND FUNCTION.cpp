#include<iostream>
using namespace std;
class data{
	private:
		int a,b;
	public:
		void getdata(){
			cout<<"enter the value of a:";
			cin>>a;
			cout<<"enter the value of b:";
			cin>>b;
		}
		friend void sum(data);
};
void sum(data d){
	cout<<"Sum="<<d.a+d.b;
}
int main(){
	data d;
	d.getdata();
	sum(d);
}