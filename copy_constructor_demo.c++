#include<iostream>
using namespace std;
class demo{
    public:
    int a,b;
    demo(){
        cout<<"Enter the value of a :";
        cin>>a;
        cout<<"Enter the value of b :";
        cin>>b;
        
    }
    /*demo(int x, int y){
        a=x;
        b=y;
    }
    demo(demo &k){
        a=k.a;
        b=k.b;
    }*/
    void display(){
        cout<<a<<endl;
        cout<<b<<endl;

        cout<<"add="<<a+b<<endl;
    }
};
int main(){
    demo d1;
    demo d2(d1);
    demo d3 = d1;
    d1.display();
    d2.display();
    d3.display();
}