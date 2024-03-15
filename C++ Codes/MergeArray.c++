#include<iostream>
using namespace std;
int main(){
    int a[] = {1,2,3};
    int b[] = {4,5,6,a[2]};
    int i;
    for(i=0;i<=5;i++){
        cout<<b[i]<<endl;
    }
    return 0;
}