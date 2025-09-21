#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> Number = {1,2,3,4,5};
    vector <int> :: iterator itr;

    itr = Number.begin();
    cout<<"First Element is : "<<*itr<<endl;

    itr = Number.end()-1;
    cout<<"Last Element is : "<<*itr<<endl;

    return 0;
}