#include<iostream>
using namespace std;
class value{
	private:
		int a,b;
	public:
		value(int x, int y){
			a=x;
			b=y;
			cout<<x<<endl<<y;
		}
};
int main(){
	value v1(100,200);
	//passing arguments
}