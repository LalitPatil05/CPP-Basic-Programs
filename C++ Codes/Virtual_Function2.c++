#include<iostream>
using namespace std;
class A{
    public:
    virtual void display()
    {
        cout<<"Base class is invoked"<<endl;
    }
};
class B : public A{
    public:
        void display()
        {
            cout<<"Derived class is invoked"<<endl;
        }
};
int main(){
    A* a;
    B Obj;
    a = &Obj;
    a->display();
    return 0;
}