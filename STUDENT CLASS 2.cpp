#include<iostream>
using namespace std;
class student{
	public:
		int id;
		char name[20];
		int marks;

	void getinfo(){
		cout<<"Enter the student id :";
		cin>>id;
		cout<<"Enter the student name :";
		cin>>name;
		cout<<"Enter the student marks :";
		cin>>marks;
	}
	
	int showinfo(){
		cout<<"student id is :"<<id<<endl;
		cout<<"student name is :"<<name<<endl;
		cout<<"student marks is :"<<marks<<endl;
	}
};

int main(){
	
	student s1;
	
	s1.getinfo();
	s1.showinfo();
}