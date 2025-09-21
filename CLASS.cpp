#include<iostream>
using namespace std;
class binary{
	public:
		int a,b,c;
		
		void getinfo(){
			cout<<"Enter the value of a:";
			cin>>a;
			cout<<"Enter the value of b:";
			cin>>b;
		}
		void showinfo(){
			cout<<"value of a is :"<<a<<endl;
			cout<<"value of b is :"<<b<<endl;
		}
		int add(){
			int c;
			c=a+b;
			cout<<"Addition is :"<<c<<endl;
		}
		int substract(){
			int c;
			c=a-b;
			cout<<"substraction is :"<<c<<endl;
		}
		int multiplication(){
			int c;
			c=a*b;
			cout<<"Multiplication is :"<<c<<endl;
		}
		int divison(){
			int c;
			c=a/b;
			cout<<"Divison is :"<<c<<endl;
		}
		int modulos(){
			int c;
			c=a%b;
			cout<<"Modulos is :"<<c<<endl;
		}
};

int main(){
	
	binary operation;
	
	operation.getinfo();
	operation.showinfo();
	
	operation.add();
	operation.substract();
	operation.multiplication();
	operation.divison();
	operation.modulos();
	
	return 0;
}



