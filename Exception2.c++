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
        cout<<"Integer Exception Occured"<<endl;
    }
    catch(double a){
        cout<<"Zero Exception Occured"<<endl;
    }
    catch(char c){
        cout<<"Character Exception Occured"<<endl;
    }
}
int main(){
    test(4);
    test(-2);
    test(0);
    return 0;
}