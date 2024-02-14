#include<iostream>
using namespace std;
template <class T>
class add{
    public:
   T a;
   T b;
   void getdata(){
    cout<<"Enter the value of a :";
    cin>>a;
    cout<<"Enter the value of b :";
    cin>>b;
   }
   void display(){
    cout<<a<<endl;
    cout<<b<<endl;
    cout<<"Addition is :"<<a+b<<endl;
   }
};
int main(){

    add<int> a1;
    a1.getdata();
    a1.display();

    add<double> a2;
    a2.getdata();
    a2.display();

    add<char> a3;
    a3.getdata();
    a3.display();
    return 0;

}