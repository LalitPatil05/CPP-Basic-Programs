#include<iostream>
using namespace std;
class student{
    protected:
    int id;
    string name;
    float marks;
    
};
class disp : public student{
    public:
    disp(){
        cout<<"Enter the student id :";
        cin>>id;
        cout<<"Enter the student name :";
        cin>>name;
        cout<<"Enter the student marks :";
        cin>>marks;
    
        cout<<"student id is :"<<id<<endl;
        cout<<"name is :"<<name<<endl;
        cout<<"marks is :"<<marks<<endl;
    }
};
class result : public disp{
    public:
    int m1,m2;
    result(){
        cout<<"Enter the m1 marks :";
        cin>>m1;
        cout<<"Enter the m2 marks :";
        cin>>m2;
        cout<<"total="<<m1+m2+marks<<endl;
        cout<<"average="<<(m1+m2+marks)/3<<endl;
    }
};
int main(){
    result r;
    return 0;
}