#include<iostream>
using namespace std;
class A{
    protected:
    int a,b;
    public:
    void get(){
        cout<<"Enter the value of a :";
        cin>>a;
        cout<<"Enter the value of b :";
        cin>>b;
    }
    void disp(){
        cout<<a<<endl;
        cout<<b<<endl;
    }
};
class B : public A{
    public:
    void mul(){
    disp();
    cout<<"The Multiplication is :"<<a*b<<endl;
    }; 
};
class C : public A{
    public:
    void add(){
        cout<<"addition is :"<<a+b<<endl;
    }
};
int main(){
    B b1;
    C c1;
    b1.get();
    b1.mul();
    c1.get();
    c1.add();
}