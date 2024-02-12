#include<iostream>
using namespace std;
class complex{
	private:
		float a;
		float b;
	public:
		complex()
		{
			a=0;
			b=0;
		}
		complex(float r,float i)
		{
			a=r;
			b=i;
		}
		complex operator -(complex c1)
		{
			complex t1;
			t1.a=a - c1.a;
			t1.b=b - c1.b;
			return t1;
		}
		void displaydata(int)
		{
			cout<<a<<"+i"<<b<<"\n";
		}
};
int main(){
	complex s1,s2,s3;
	s1=complex(5.5,3.4);
	s2=complex(1.4,2.3);
	s3-s1-s2;
	cout<<"Substraction=";
	s3.displaydata();
}