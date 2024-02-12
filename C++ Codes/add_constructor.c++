#include<iostream>
using namespace std;
class add{
    public:
    int a,b;
   
    add(){
        cout<<"Enter the value of a :";
        cin>>a;
        cout<<"Enter the value of b :";
        cin>>b;

        cout<<"Addition is :"<<a+b<<endl;
    }
};

int main(){
    add a1;
}