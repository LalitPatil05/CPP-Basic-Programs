// Demonstration of Inline Function in C++

// Inline Function is Used to provide a way to optimize the performance of code.


#include<iostream>
using namespace std;

inline int square(int x){
	return x*x;
}

/*int add(int a, int b){
	return a + b;
}*/

int main(){
	cout<<"Square is : "<<square(5)<<endl;
	//cout<<"Addition is : "<<add(2,6)<<endl;
	return 0;
}