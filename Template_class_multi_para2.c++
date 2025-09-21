#include<iostream>
using namespace std;
template<class T1, class T2>
class Adder{
   private:
    T1 a;
    T2 b;
    public:
    Adder(T1 a,T2 b){
        this->a = a;
        this->b = b;
    }
    void display(){
        cout<<"Sum is :"<<(a+b)<<endl;
    }
};
int main(){
    Adder<int,int>a1(3,5);
    Adder<double,int>a2(1.2,10);
    a1.display();
    a2.display();
    return 0;
}