#include<iostream>
using namespace std;

// create a class....

class myclass{ //the class
	public: // access the specifier....
	int mynum;  // attribute (int variable).....
	string mystring; // attribute (string variable)....
};

int main() {
	myclass myobj; // create a object of my class.....
	
	// access attributes and set values....
	myobj.mynum=11;
	myobj.mystring="lalit";
	
	// print attributes values....
	cout<<myobj.mynum<<"\n";
	cout<<myobj.mystring<<"\n";
	
	return 0;
}