#include<iostream>
using namespace std;
template <typename T>
T Getmax(T a, T b){
    T result;
    if(a>b){
        result=a;
    }
    else{
        result=b;
    }
    return result;
}
int main(){
    int a=10;
    int b=20;
    int result1;
    result1 = Getmax<int>(a,b);
    cout<<"Result 1 is :"<<result1<<endl;

    double x=1.2;
    double y=2.3;
    double result2;
    result2 = Getmax<double>(x,y);
    cout<<"Result 2 is :"<<result2<<endl;

    char ch1='a';
    char ch2='p';
    char result3;
    result3 = Getmax<char>(ch1,ch2);
    cout<<"Result 3 is :"<<result3<<endl;

    return 0;
}