#include<iostream>
using namespace std;
class a{
	public:
		int a;
		
		void geta()
		{
			cout<<"Enter the value of a : ";
			cin>>a;
		}
};

class b : public a 
{
	public:
	int b;
	
	void getb()
	{
		cout<<"Enter the value of b  : ";
		cin>>b;
	}
};

class c : public b
{
	public:
		int c;
		
		void display()
		{
			cout<<"a="<<a<<endl;
			cout<<"b="<<b<<endl;
			
			cout<<"add="<<a+b<<endl;
		}
};

int main()
{
	c a;
	a.geta();
	a.getb();
	a.display();
}