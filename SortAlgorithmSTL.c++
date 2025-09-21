#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){

    vector <int> Number = {9,8,7,3,2,5,4};

    sort(Number.begin() , Number.end());

    for(int n : Number){
        cout<<n<<" , ";
    }

    return 0;
}