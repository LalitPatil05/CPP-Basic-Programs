#include<iostream>
using namespace std;
class student {
	private:
		int rno;
		char name[20];
	public:
		void getdata(){
			cout<<"Enter the student roll number :";
			cin>>rno;
			cout<<"Enter the student name :";
			cin>>name;
		}
		void putdata(){
			cout<<"Student Roll number is :"<<rno<<endl;
			cout<<"Student name is :"<<name<<endl;
		}
};
int main(){
	student s1;
	s1.getdata();
	s1.putdata();
}