#include<iostream>
using namespace std;

class Student{
	private:
		int id;
		string name;
		
		public:
			void getDetails(int i, string n){
				id = i;
				name = n;
			}
			
		friend int returnId(Student& obj);
		friend string returnName(Student& obj);
};

int returnId(Student& obj){
	return obj.id;
}

string returnName(Student& obj){
	return obj.name;
}

int main(){
	Student student;
	
	student.getDetails(101,"Lalit");
	cout<<returnId(student);
	cout<<returnName(student);
	return 0;
}