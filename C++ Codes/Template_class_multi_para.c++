#include<iostream>
using namespace std;
template <class T1, class T2>
class Test{
    public:
    T1 a;
    T2 b;
    Test(T1 x, T2 y){
        a=x;
        b=y;
    }
    void show(){
        cout<<a<<endl;
        cout<<b<<endl;
    }
};
int main(){
    Test <int,double>t1(12,1.2);
    t1.show();

    Test<int,char>t2(20,'A');
    t2.show();

    return 0;
}