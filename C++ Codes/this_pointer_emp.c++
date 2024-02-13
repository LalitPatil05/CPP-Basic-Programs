#include<iostream>
using namespace std;
class Employee{
    int id;
    string name;
    float salary;
    public:
    Employee(int id, string name, float salary){
       this->id=id;
        this->name=name;
        this->salary=salary;
    }
    void display(){
        cout<<"id :-"<<id<<endl;
        cout<<"Name :-"<<name<<endl;
        cout<<"Salary :-"<<salary<<endl;
    }
};
int main(){
    Employee e1(101,"Yash",10000);
    e1.display();
    return 0;
}