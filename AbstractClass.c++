#include<iostream>
using namespace std;

class A{
    public:
        A(){
            cout<<"Content Of Class A\n";
        }
};

class B : public virtual A{
    public:
    B(){
        cout<<"Content of Class B\n";
    }
};

class C : public B, public virtual A{
    public:
    C(){
        cout<<"Content of Class C\n";
    }
};

int main(){
    C obj;
    return 0;    
}