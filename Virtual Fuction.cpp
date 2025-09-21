//Program to Demonstrate the Concept of Virtual Function and Abstract class..!!
#include<iostream>
using namespace std;
class test{
	protected:
		float length;
		public:
			void getdata(){
				cout<<"Enter the Length of Square :";
				cin>>length;	
			}
		//virtual Function..
		virtual float calculateArea()=0;	
};
class Square : public test{
	public:
		float calculateArea(){
			return length*length;
		}
};
class Circle : public test{
	public:
		int radius;
		void get_radius(){
			cout<<"Enter the Radius of Circle :";
			cin>>radius;
		}
		float calculateArea(){
			return 3.14*radius*radius;
		}
};
int main(){
	Square s;
	Circle c;
	s.getdata();
	cout<<"Area of Square is..!!"<<endl;
	s.calculateArea();
	c.get_radius();
	cout<<"Area of Circle is..!!"<<endl;
	c.calculateArea();
	return 0;
}