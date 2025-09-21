// Ex. function defined outside the class.....
#include<iostream>
using namespace std;
class student {
	private:
		int rno; //data memeber
		char name[20]; // data memeber
	public:
		void getdata();// function decleration....
		void putdata();// function decleration....
};
// getdata() function defination....
void student :: getdata(){
	cout<<"Enter the Student Roll No. :";
	cin>>rno;
	cout<<"Enter the student Name :";
	cin>>name;
}
// putdata() function defination....
void student :: putdata(){
	cout<<"Student Roll No. is :"<<rno<<endl;
	cout<<"Student Name is :"<<name<<endl;
}
int main(){
	student s1;
	s1.getdata();
	s1.putdata();
}