#include<iostream>
using namespace std;
class addition{
	private:
		int a,b,c;
	public:
		void getdata(){
			cout<<"Enter the value of a :";
			cin>>a;
			cout<<"Enter the value of b :";
			cin>>b;
		}
		void display(addition *k){
			c = k->a + k->b;
			cout<<"Addition is :"<<c<<endl;
		}
};
int main(){
	addition a1;
	a1.getdata();
	a1.display(&a1);
}