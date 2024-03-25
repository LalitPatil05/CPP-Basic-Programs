#include<iostream>
using namespace std;

class FunctionObject{
    public:
    int operator() (int a, int b){
        return a+b;
    }

    int operator() (int a, int b){
        return a-b;
    }

    int operator() (int a, int b){
        return a*b;
    }

    int operator() (int a, int b){
        return a/b;
    }
};

int main(){
    FunctionObject functionobject;
    int Result;

    Result = functionobject(4,2);
    
    cout<<"Operations Result is : "<<Result;

    return 0;

}