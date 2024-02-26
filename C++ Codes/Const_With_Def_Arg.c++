#include<iostream>
using namespace std;
class add{
    public:
    int a;
    int b;
    int c;
    int d;

    add(int a=10, int b=20, int c=30, int d=40)
    {
        this->a = a;
        this->b = b;
        this->c = c;
        this->d = d;
    }

    void display()
    {
        cout<<a<<endl;
        cout<<b<<endl;
        cout<<c<<endl;
        cout<<d<<endl;
        cout<<"Addition is..!! : "<<a+b+c+d<<endl;
    }
};
int main(){
    add a1(10);
    a1.display(); // 100
    add a2(5,4);
    a2.display(); // 79
    add a3(3);
    a3.display(); // 93
    add a4(4,6,2);
    a4.display(); // 52
    add a5;
    a5.display(); // 100
    return 0;
}