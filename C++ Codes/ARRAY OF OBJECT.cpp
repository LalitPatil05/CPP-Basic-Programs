// EX. ARRAY OF OBJECT.......
#include<iostream>
using namespace std;

class student {
	
	private:
		int rno;
		char name[20];
	
	public:
		void getdata(){
			cout<<"Enter the student roll no. :";
			cin>>rno;
			cout<<"Enter the student name :";
			cin>>name;
		}
		void putdata(){
			cout<<"student roll number is :"<<rno<<endl;
			cout<<"student name is :"<<name<<endl;
		}
};

int main(){
	student s1[5]; // declare a 5 stundet array..
	
	int i; 
	
	for(i=0;i<5;i++)
	{
		cout<<endl;
		s1[i].getdata(); // read the information.....
	}
	
	for(i=0;i<5;i++)
	{
		cout<<endl;
		s1[i].putdata(); // write the information....
	}
}