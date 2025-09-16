#include<iostream>
using namespace std;

class Student{
	protected:
		int id;
		string name;
		
		public:
			friend void setData(Student& obj, int i, string s);
			friend void getData(Student obj);
};

void setData(Student& obj, int i, string s){
	obj.id = i;
	obj.name = s;
}

void getData(Student obj){
	cout<<"Student id is : "<<obj.id<<endl;
	cout<<"Student name is : "<<obj.name<<endl;
}

int main(){
	Student obj;
	setData(obj,101,"YashPatil");
	getData(obj);
	return 0;
}