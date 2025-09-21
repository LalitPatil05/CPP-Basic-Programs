#include<iostream>
using namespace std;
class two;
class one{
	private:
		int a,b;
	public:
		void getdata(){
			cout<<"enter the value of a :";
			cin>>a;
			cout<<"enter the value of b :";
			cin>>b;
		}
		friend class two;
};
class two{
	private:
		int c;
	public:
		void add(one d){
			c=d.a+d.b;
			cout<<"sum is :"<<c<<endl;
		}
};
int main(){
	one k;
	two t;
	k.getdata();
	t.add(k);
}