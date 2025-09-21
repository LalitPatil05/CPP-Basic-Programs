#include<iostream>
using namespace std;
class dist{
    public:
    int x1,x2,x3;
    dist(int x, int y){
        x1=x;
        x2=y;
        x3=0;
        cout<<"paramitarized constructor involked"<<endl;
        cout<<"x1="<<x1<<"x2="<<x2<<endl;
    }
    void sum();
    void display();
    ~dist()//destructor created
    {
        cout<<"destructor involked"<<endl;
    }
};
void dist::sum(){
    int sum;
    sum=x1+x2;
}
void dist::display(){
    
}
int main(){
    dist a(100,250);
    a.sum();
    a.display();
    return 0;
}