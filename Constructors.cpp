//Program To Demonestrate the Concept of All Types of Constructors....
#include<iostream>
#include<string.h>
using namespace std;
class person{
	private:
		char name[30];
		int age;
			public:
				person(){
					strcpy(name,"None");
					age=0;
				}
				person(char n[],int a){
					strcpy(name,n);
					age=a;
				}
				person(person &p){
					strcpy(name,p.name);
					age=p.age;
				}
				void display(void){
					cout<<"Name is :"<<name<<endl;
					cout<<"Age is :"<<age<<endl;
				}
				~person(){
					cout<<"Destructor Invoked..!!"<<endl;
					cout<<"Deallocate the all the to be crated by construcors..!!"<<endl;
				}
};
int main(){
	person p1;
	person p2("Lalit Patil",101);
	person p3(p2);
	cout<<"Object P1 is..!!"<<endl;
	p1.display();
	cout<<"Object P2 is..!!"<<endl;
	p2.display();
	cout<<"Object P3 is..!!"<<endl;
	p3.display();
	return 0;
}