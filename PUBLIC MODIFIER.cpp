// C++ using public access modifier......
#include<iostream>
using namespace std;
class sample{
	public:
		int x;
};
int main(){
	sample obj;
	obj.x=23;
	cout<<"value of x is :"<<obj.x<<endl;
}