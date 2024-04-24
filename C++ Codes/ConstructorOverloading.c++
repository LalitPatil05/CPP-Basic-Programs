#include<iostream>
using namespace std;
class test{
    public:
    test(int a, int b){
        cout<<"Return type is integer and two integer arguments\n";
    }
    test(double x, double y){
        cout<<"Return type is double and two double type of arguments\n";
    }

};
int main(){
    test t(2.5,4.2);
    test t2(2,4);
    return 0;
}