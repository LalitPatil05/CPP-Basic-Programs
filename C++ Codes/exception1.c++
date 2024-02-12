#include<iostream>
using namespace std;
int divison(int x, int y){
    if(y==0){
        throw "zero divison condition";
    }
    return (x/y);
}
int main(){
    int a;
    int b;
    int result=0;

    cout<<"Enter the value of a :";
    cin>>a;
    cout<<"Enter the value of b :";
    cin>>b;

    try{
        result=divison(a,b);
        cout<<"Result is :"<<result<<endl;
    }
    catch(const char* msg){
        cerr<<msg<<endl;
    }

    return 0;
}