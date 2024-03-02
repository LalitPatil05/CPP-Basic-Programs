#include<iostream>
using namespace std;
class Base{
    public:
    virtual void show()=0;
};
class Derived : public Base{
    public:
    void show()
    {
        cout<<"Derived Class is Invoked..!!"<<endl;
    }
};
int main(){
    Base *Bptr;
    Derived d;
    Bptr = &d;
    Bptr->show();
    return 0;
}