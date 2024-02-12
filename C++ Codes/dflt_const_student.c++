#include<iostream>
using namespace std;
class student{
    public:
    int id;
    string name;
    float fees;

    student()
    {
        cout<<"Enter the student id :";
        cin>>id;
        cout<<"Enter the student name :";
        cin>>name;
        cout<<"Enter the student fees :";
        cin>>fees;
        cout<<endl;
        cout<<"Student id is :"<<id<<endl;
        cout<<"Student name is :"<<name<<endl;
        cout<<"Student fees is :"<<fees<<endl;

    }
};
int main(){
    student s1;
    student s2;
}