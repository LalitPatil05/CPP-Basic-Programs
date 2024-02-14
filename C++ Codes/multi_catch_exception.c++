#include<iostream>
using namespace std;
int test(int x){
    try{
    if(x>0){
        throw x;
    }
    else if(x==0){
        throw 1.2;
    }
    else{
        throw 'x';
    }
    }
    catch(int i){
        cout<<"Integer Exception"<<i<<endl;
    }
    catch(char ch){
        cout<<"Character Exception"<<ch<<endl;
    }
    catch(double f){
        cout<<"Floating Exception"<<f<<endl;
    }
}
int main(){
    test(5);
    test(-2);
    test(0);
    return 0;
}