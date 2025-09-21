#include<iostream>
using namespace std;
class CLASSA{
    public:
    int a;
};
class CLASSB : public CLASSA{
    public:
    int b;
};
class CLASSC : public CLASSA{
    public:
    int c;
};
class CLASSD : public CLASSB, public CLASSC{
    public:
    int d;
};
int main(){
    CLASSD obj;

    //obj.a=10; error throwing....
    //obj.a=20; error throwing....

    obj.CLASSB :: a=10;
    obj.CLASSC :: a=20;

    obj.b=30;
    obj.c=40;
    obj.d=50;

    cout<<"A from CLASSB :"<<obj.CLASSB ::a<<endl;
    cout<<"A from CLASSC :"<<obj.CLASSC ::a<<endl;

    cout<<"B="<<obj.b<<endl;
    cout<<"C="<<obj.c<<endl;
    cout<<"D="<<obj.d<<endl;

    return 0;

}