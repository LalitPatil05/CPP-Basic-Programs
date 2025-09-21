// C++ initialize and display data through the method.....
#include<iostream>
using namespace std;
class student{
	public:
	int id;
	string name;
	
	void insert(int i, string n){
		id=i;
		name=n;
	}
	void display(){
		cout<<"student id is :"<<id<<endl;
		cout<<"student name is :"<<name<<endl;
	}
};
int main(){
	student s1;
	student s2;
	s1.insert(201,"CHETAN");
	s2.insert(203,"YOGESH");
	
	s1.display();
	s2.display();
	
}