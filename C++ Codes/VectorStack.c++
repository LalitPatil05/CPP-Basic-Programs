#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector <int> vtr;
    vtr.push_back(1);
    vtr.push_back(2);
    vtr.push_back(3);
    vtr.push_back(4);
    vtr.push_back(5);
    vtr.push_back(6);
    vtr.push_back(7);
    vtr.push_back(8);
    vtr.push_back(9);
    vtr.pop_back();

    for(int i = 0 ; i<vtr.size() ; i++){
        cout<<vtr[i]<<"|";
    }
    
    return 0;
}