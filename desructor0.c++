#include<iostream>
using namespace std;
class test{
    public:

    test(){
        cout<<"Constructor is invoked"<<endl;
    }

    ~test(){
        cout<<"Destructor is invoked"<<endl;
    }
};
int main(){
    test t;
}