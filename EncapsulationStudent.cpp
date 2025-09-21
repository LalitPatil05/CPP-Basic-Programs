#include<iostream>
using namespace std;

class Student{
	private:
		int age;
		string name;
		
	public:
		void setAge(int a){
			if(a>0){
				age = a;
			}
		}
		
		void setName(string s){
			name = s;
		}
		
		int getAge(){
			return age;
		}
		string getName(){
			return name;
		}
};

int main(){
	Student student;
//	student.age = 20; // This is Not Allowed in Encapsulation..
//	student.name = "Sumit"; // This is Not Allowed in Encapsulation..

	student.setAge(18);
	student.setName("Sumit");
	cout<<student.getAge();
	cout<<student.getName();
	
	
}