#include<iostream>
using namespace std;
class A{
    protected:
    int a,b;
};
class B : public A{
    protected:
    int c;
    public:
    B(){
        a=10,b=20,c=30;
        cout<<"value of a is :"<<a<<endl;
        cout<<"value of b is :"<<b<<endl;
        cout<<"Value of c is :"<<c<<endl;
    }
};
int main(){
    B b1;
    return 0;
}