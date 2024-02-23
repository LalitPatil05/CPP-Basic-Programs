#include<iostream>
using namespace std;
template <class T>
class Add{
    public:
    T a;
    T b;
    void Getdata(){
        cout<<"Enter the value of a : ";
        cin>>a;
        cout<<"Enter the value of b : ";
        cin>>b;
    }
    void display(){
        cout<<a<<endl;
        cout<<b<<endl;
    }
    T Getmax(){
        if(a>b){
            cout<<"A is Greater..!!"<<endl;
        }
        else{
            cout<<"B is Greater..!!"<<endl;
        }
    }
};
int main(){
    Add<int>a1;
    a1.Getdata();
    a1.display();
    a1.Getmax();
    return 0;
}