#include<iostream>
using namespace std;
class student {
	int rno;
	char name[20];
	public:
		void getinfo(){
			cout<<"Enter the roll number :";
			cin>>rno;
			cout<<"Enter the student name :";
			cin>>name;
		}
		void display(){
			cout<<"student roll no. is :"<<rno<<endl;
			cout<<"Student name is :"<<name<<endl;
		}
};
int main(){
	student s1;
	s1.getinfo();
	s1.display();
}