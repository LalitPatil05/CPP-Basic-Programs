#include <iostream>
using namespace std;
class printmethods {
public:
void add(int i, int j) {
cout << "integer sum: " << i+j << endl;
}
void add(double f) {
cout << "floating value: " << f << endl;
}
float add(double a, double b){
	cout<<"float sum :"<<a+b<<endl;
}
};
int main(void) {
printmethods obj;
obj.add(5,3);
obj.add(90.75);
obj.add(2.5,1.5);
return 0;
}