#include<iostream>
using namespace std;
class A{
    protected:
    int x,y;
    public:
    void get1(int a,int b);
    void disp1();
};
void A :: get1(int a, int b)
{
    x=a;
    y=b;
}
void A :: disp1(){
    cout<<"The value of x="<<x<<endl;
    cout<<"The value of y="<<y<<endl;
}
class B : public A{
    public:
    void add(){
        disp1();
        cout<<"the addition of x & y is :"<<x+y<<endl;
    }
};
class C : public A{
    public:
    void mul(){
        cout<<"The Multiplication of x & y is :"<<x*y<<endl;
    }
};
class D : public A{
    public:
    void avg(){
        cout<<"The Average is :"<<x+y/2<<endl;
    }
};
int main()
{
    B ob1;
    C ob2;
    D ob3;
    ob1.get1(3,4);
    ob1.add();
    ob2.get1(5,6);
    ob2.mul();
    ob3.get1(5,6);
    ob3.avg();

    return 0;
}
