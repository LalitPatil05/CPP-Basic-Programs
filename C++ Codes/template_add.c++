#include<iostream>
using namespace std;
template <typename T>
T add(T num1 , T num2){
    return (num1+num2);
}
int main(){
    int a=10;
    int b=20;
    int result1;
    result1 = add<int>(a,b);
    cout<<"Result 1 is :"<<result1<<endl;

    double x=2.5;
    double y=3.2;
    double result2;
    
    result2 = add<double>(x,y);
    cout<<"Result 2 is :"<<result2<<endl;
}