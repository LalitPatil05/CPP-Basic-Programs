#include<iostream>
using namespace std;
class test{
    int m;
    public:
    void display(){
        this->m=10;
        cout<<"The value of m is : "<<m<<endl;
        cout<<"this is : "<<this<<endl;
        cout<<"Use this pointer this->m : "<<this->m<<endl;
        cout<<"Use (*this).m : "<<(*this).m<<endl;
        cout<<"address is : "<<&m<<endl;
    }
};
int main(){
    test t;
    t.display();
}