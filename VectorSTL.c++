#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> numbers {1,2,3,4,5};
    for(int a : numbers){
        cout<<a<<endl;
    }
    return 0;
}