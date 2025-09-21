#include<iostream>
using namespace std;
class add{
    private:
    int a,b;
    public:
    add(int x, int y){
        a=x;
        b=y;
    }
    add(add &k){
        a=k.a;
        b=k.b;
    }
    void display(){
        cout<<a<<endl;
        cout<<b<<endl;
        cout<<"sum is :"<<a+b<<endl;
    }
};

int main(){

    add a1(10,20);
    cout<<"first object"<<endl;
    a1.display();
    cout<<endl;
    add a2(a1);
    a2.display();
    cout<<"second object"<<endl;
    cout<<endl;
    add a3=a1;
    cout<<"third object"<<endl;
    a3.display();
    
}