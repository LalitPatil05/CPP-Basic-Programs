//C++ program to demonestrate inline functions and classes....
#include<iostream>
using namespace std;

class operation{
	int a,b,add,sub,mul;
	float div;
	public:
		void get();
		void sum();
		void difference();
		void product();
		void divison();
};
inline void operation :: get(){
	cout<<"Enter the value of a:";
	cin>>a;
	cout<<"Enter the value of b:";
	cin>>b;
}
inline void operation :: sum(){
	add=a+b;
	cout<<"Addition is :"<<add<<endl;
}
inline void operation :: difference(){
	sub=a-b;
	cout<<"Substraction is :"<<sub<<endl;
}
inline void operation :: product(){
	mul=a*b;
	cout<<"Product is :"<<mul<<endl;
}
inline void operation :: divison(){
	div=a/b;
	cout<<"divison is :"<<div<<endl;
}

int main(){
	cout<<"Program Using Inline Function.."<<endl;
	operation s;
	s.get();
	s.sum();
	s.difference();
	s.product();
	s.divison();
	
	return 0;
	
}
