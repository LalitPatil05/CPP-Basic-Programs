#include<iostream>
using namespace std;
class Add{
    public:
    int a;
    int b;
    virtual void calculate()=0;
};
class Derived : public Add{
    public:
   void getdata()
   {
        cout<<"Enter the value of a :";
        cin>>a;
        cout<<"Enter the value of b :";
        cin>>b;
   }
    void calculate()
    {
        cout<<"Addition is : "<<a+b<<endl;
    }
};
int main(){
    Add *ptr;
    Derived obj;
    ptr = &obj;
    obj.getdata();
    ptr->calculate();
    return 0;
}