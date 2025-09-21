#include<iostream>
using namespace std;
class test1{
    public:
    int a;
    void geta(){
        cout<<"Enter the value of a :";
        cin>>a;
    }
};
class test2:public test1{
    public:
    int b;
    void getb(){
        cout<<"Enter the value of b :";
        cin>>b;
    }
    int calculate(){ 
    cout<<"The Additon is :"<<a+b<<endl;
}
};
int main(){
    test2 t2;
    t2.geta();
    t2.getb();
    t2.calculate();
}