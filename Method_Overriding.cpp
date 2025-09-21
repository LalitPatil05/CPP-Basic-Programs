#include<iostream>
using namespace std;

class A{
	int a;
	public: 
	void getdata(){
		cout<<"Enter the Value of a : ";
		cin>>a;
	}
	void putdata(){
		cout<<"Value of a is : "<<a;
	}
};

class B : public A{
	int b;
	public: 
	void getdata(){
		cout<<"Enter the value of b : ";
		cin>>b;
	}
	void putdata(){
		cout<<"Value of a is : "<<b;
	}
};

class C : public A {
	public:
	int c;
	void getdata(){
		cout<<"Enter the value of c : ";
		cin>>c;
	}
	void putdata(){
		cout<<"Value of c is : "<<c;
	}
};

int main(){
	A* obj = new B();
	obj->getdata();
	obj->putdata();
}