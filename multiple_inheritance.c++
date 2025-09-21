#include<iostream>
using namespace std;
class test1{
    protected:
    int n1;
    public:
    void get1();
    void disp1();
};
void test1 :: get1(){
    cout<<"Enter the value of First Number :";
    cin>>n1;
}
void test1 :: disp1(){
    cout<<"The Number is :"<<n1<<endl;
}
class test2{
    protected:
    int n2;
    public:
    void get2();
    void disp2();
};
void test2 :: get2(){
    cout<<"Enter the value of second number :";
    cin>>n2;
}
void test2 :: disp2(){
    cout<<"The Second Number is :"<<n2<<endl;
}
class mul:public test1,public test2 {
    public:
    void disp3(){
        disp1();
        disp2();
        cout<<"The Multiplication is :"<<n1*n2<<endl;
    }
};
int main(){
    mul m1;
    m1.get1();
    m1.get2();
    m1.disp3();
    return 0;
}