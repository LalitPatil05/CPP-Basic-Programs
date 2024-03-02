#include<iostream>
using namespace std;
class Parent{
    public:
    void display()
    {
        cout<<"Parent Class Invoked..!!"<<endl;
    }
};
class Base : public Parent{
    public: 
    void display()
    {
        cout<<"Base class invoked..!!"<<endl;
    }
};

class Derived : public Base{
    public:
    void display()
    {
        cout<<"Derived Class Invoked..!!"<<endl;
    }
};
int main(){
    Derived *a;
    Derived dobj;
    a = &dobj;            // Derived Class Function call...
    dobj.display();

    Base *b;
    Base bobj;
    b = &bobj;             // Base Class Function Call...
    b->display();

    Parent *p;
    Parent pobj;
    p = &pobj;              // Parent Class Function Call...
    p->display();

    return 0;
}