#include<iostream>
using namespace std;
class id{
    protected:
    int id;
    public:
    void getid(){
        cout<<"Enter the student id :";
        cin>>id;
    }
};
class name{
    protected:
    string name;
    public:
    void getname(){
        cout<<"Enter the student name :";
        cin>>name;
    }
};
class marks{
    protected:
    float m1,m2;
    public:
    void getmarks(){
        cout<<"Enter the m1 marks :";
        cin>>m1;
        cout<<"Enter the m2 marks :";
        cin>>m2;
    }
};
class result : public id, public name, public marks{
    public:
    void display(){
        cout<<"id="<<id<<endl;
        cout<<"name="<<name<<endl;
        cout<<"m1 marks="<<m1<<endl;
        cout<<"m2 marks="<<m2<<endl;
    }
    void show(){
        cout<<"Total="<<m1+m2<<endl;
        cout<<"Percentage="<<m1+m2/200*100<<endl;
        cout<<"average="<<m1+m2/2<<endl;
    }
};
int main(){
    result d1;
    d1.getid();
    d1.getname();
    d1.getmarks();
    d1.display();
    d1.show();
}