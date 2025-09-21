//EX. PROGRAM TO IMPLEMENTED THE POINTER TO OBJECT......
#include<iostream>
using namespace std;
class student{
	private:
		int rno;
		char name[20];
	public:
		void getdata();//function decleration..
		void display();//function decleration..
};
//function defination.....
void student::getdata(){
	cout<<"Enter the student Roll No :";
	cin>>rno;
	cout<<"Enter the student Name :";
	cin>>name;
}
//function defination.....
void student::display(){
	cout<<"Student Roll No is :"<<rno<<endl;
	cout<<"Student Name is :"<<name<<endl;
}
//main() method......
int main(){
	
	student obj; // create object...
	student *ptr=&obj; //initialize pointer to object.....
	
	ptr->getdata();//function calling....
	ptr->display();//function calling....
}