#include<iostream>
using namespace std;
class student{
    public:
    int id;
    string name;
    float fees;

    student(){
        cout<<"Enter stundet id :";
        cin>>id;
        cout<<"Enter student name :";
        cin>>name;
        cout<<"Enter student fees :";
        cin>>fees;
      
        cout<<"Student id is :"<<id<<endl;
        cout<<"Student name is :"<<name<<endl;
        cout<<"Student fees is :"<<fees<<endl;
    }
};
int main(){
    student s1;
}