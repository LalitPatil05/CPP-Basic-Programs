#include<iostream>
using namespace std;
class student{
    public:
    int id;
    string name;
    float fees;

    student(int i, string n, float f){
        id=i;
        name=n;
        fees=f;
    }

    void display(){
        cout<<"Student id is :"<<id<<endl;
        cout<<"Student name is :"<<name<<endl;
        cout<<"Student fees is :"<<fees<<endl;
    }
};

int main(){
    student s1(101,"DIPAK",10000);
    s1.display();
    cout<<endl;
    student s2(102,"CHETAN",20000);
    s2.display();
}