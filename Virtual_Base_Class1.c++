#include<iostream>
using namespace std;
class Parent{
    public:
   virtual void display()
    {
        cout<<"Parent Class is Invoked..!!"<<endl;
    }
};
class Base{
    public:
    void display()
    {
        cout<<"Base Class is Invoked..!!"<<endl;
    }
};
class Child{
    public:
    void display()
    {
        cout<<"Child Class is Invoked..!!"<<endl;
    }
};
int main(){
    Child Object;
    Object.display();
    return 0;
}