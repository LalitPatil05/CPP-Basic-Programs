#include<iostream>
#include<vector>
using namespace std;
class FunctionObject{
    public:
    int operator()(int a, int b){
        return a+b;
    }
};
int main(){
    FunctionObject functionobject;
    int Result;
    Result = functionobject(5,7);

    cout<<"Addition is : "<<Result;
    
    return 0;
}