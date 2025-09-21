#include<iostream>
using namespace std;
class X{
    private:
    int a;
    protected:
    int b;
    public:
    int c;
};
class Y : public X{
    public:
};
int main(){
    Y obj1,obj2,obj3;
    obj1.a=10;
    obj2.b=20;
    obj3.c=30;

    cout<<obj1.a<<endl;
    cout<<obj2.b<<endl;
    cout<<obj3.c<<endl;
}