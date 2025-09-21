#include<iostream>
using namespace std;
template <typename T> T mymax(T x, T y){
    if(x>y){
        return x;
        cout<<x<<" is Greater."<<endl;
    }
    else{
        return y;
        cout<<y<<" is Greater."<<endl;
    }
}
int main(){

    int a=10;
    int b=20;
    int result1;
    result1 = mymax<int>(a,b);
    cout<<"Result 1 is :"<<result1<<endl;

    double x=1.2;
    double y=2.3;
    double result2;
    result2 = mymax<double>(x,y);
    cout<<"Result 2 is :"<<result2<<endl;

    char ch1='A';
    char ch2='M';
    char result3;
    result3 = max<char>(ch1,ch2);
    cout<<"Result 3 is :"<<result3<<endl;

    return 0;
}