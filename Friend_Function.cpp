#include<iostream>
using namespace std;

class Demo{
	protected:
		int x;
		
	public:
		friend void setValue(Demo& d, int a);
		friend int getValue(Demo d);	
};

void setValue(Demo& d, int a){
	d.x = a;
}

int getValue(Demo d){
	return d.x;
}

int main(){
	
	Demo obj;
	setValue(obj, 10);
	cout<<"Value is : "<<getValue(obj)<<endl;
	
}