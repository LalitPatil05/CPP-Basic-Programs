#include<iostream>
#include<stdexcept>
using namespace std;
int main() {
	int a=10;
	int b=0;
	int c;
	{
		try {
			if(b!=0) {
				c=a/b;
				cout<<"result="<<c<<endl;
			} else {
				throw(b);
			}

		}

		catch(int exception) {

			cout<<"Error occured";
		}
	}

}