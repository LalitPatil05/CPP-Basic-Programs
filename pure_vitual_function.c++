#include<iostream>
using namespace std;
class first {
	public:
		void virtual show()=0;
};
class second : public first {
	public:
		void show() {
			cout<<"show of second  class"<<endl;
		}
};
int main() {
	first *p=new second;
	p->show();

}