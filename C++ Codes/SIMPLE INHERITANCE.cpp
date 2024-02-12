#include<iostream>
using namespace std;

class test{
	public:
		int a,b;
		
		void getdata(){
			cout<<"Enter the value of a :";
			cin>>a;
			cout<<"Enter the value of b :";
			cin>>b;
		}
		
	
};

class test1 : public test
{
	public:
		
		void display (){
		
			cout<<"value of a is :"<<a<<endl;
			cout<<"value of b is :"<<b<<endl;
			
			cout<<"Addition is :"<<a+b<<endl;
		}
	
};

class multiplication : public test,public test1{
	public :
	 	int multi(){
	 		cout<<"Multiplication is :"<<a*b<<endl;
		 }
};

	int main()
	{
		multiplication t;
		
		t.getdata();
		t.display();
		t.multi();
	}