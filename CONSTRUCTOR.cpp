#include<iostream>
using namespace std;
 // declaring class...
class rectangle{
 	//access modifier
 	public:
 		// data member
		int a,b;
 		int height;
 		int width;
 		int area;
 		//constructor
 		//notice here there is no return type name is same as class name

 		rectangle(){
 			height=20;
 			width=30;
 			area=height*width;
 			cout<<"Area of Rectangle :"<<area;
		 }
 };
 int main(){
 	//creating instance(object) of class
 	//notice here no need to call a constructor

 	rectangle rec1;
	
 }