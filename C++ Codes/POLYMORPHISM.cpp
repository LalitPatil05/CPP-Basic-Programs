#include<iostream>
using namespace std;
class poly {
	public:
		void a(){
			cout<<"NO PARA\n";
		}
		void a(int i){
			cout<<"INTEGER VALUE\n";
		}
		void a(double d){
			cout<<"DOUBLE PARA\n";
		}
		void a(char ch){
			cout<<"CHARACTER PARA\n";
		}
};
int main(){
	//creating instance of derived class
	poly obj;
	//calling class function
	obj.a(12);//passing integer value 
	obj.a('A');//passing character value
	obj.a();// NO para
}