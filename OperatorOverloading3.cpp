/*#include<iostream>
using namespace std;

class Increment{
	private:
		int value;
		
	public:
		Increment(){
			value = 10;
		}
	void operator ++(){
		value = value + 5;
	}
	
	void display(){
		cout<<"After Incrementing Value is : "<<value<<endl;
	}
};

int main(){
	Increment inc;
	++inc;
	inc.display();
	return 0;
}*/


#include<iostream>
using namespace std;

class Complex{
	private:
		int real;
		int img;
	
	public:
		Complex(int r=0, int i=0){
			real = r;
			img = i;
		}
		
		Complex operator +(Complex &obj){
			return Complex(real+obj.real, img+obj.img);
		}
		
		void display(){
			cout << "Addition is : " << real << "+" << img << "i" << endl; 
		}
		
};	
	
int main(){
	Complex c1(1,2);
	Complex c2(3,4);
	Complex c3 = c1 + c2;
	c3.display();
	return 0;
}
	
	
	