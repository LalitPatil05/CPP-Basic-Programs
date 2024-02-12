#include<iostream>
using namespace std;
class test{
	public:
		test(){
			cout<<"Constructor is created...."<<endl;
		}
		~test(){
			cout<<"Constructor is destroyed..."<<endl;
		}
};
int main(){
	test t;
}