#include<iostream>
using namespace std;
template <class T>
class number{
    public:
    T num;
    T num2;

    number(T n) : num(n) {}

    void display(){
        cout<<"Value is :"<<num<<endl;
    }
};
int main(){

    number<int> e1(5);
    e1.display();

    number<double> e2(2.3);
    e2.display();

    number<char> e3('a');
    e3.display();

    return 0;
}