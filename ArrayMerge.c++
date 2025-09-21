#include<iostream>
using namespace std;

int main(){

    int m = 5;
    int n = 3;

    int arr[m] = {1,2,3,4,5};
    int arr2[n] = {6,7,8};

   for(int i = 0; i < n ; i++){
        arr[m+i] = arr2[i];
   }

    // print Array..........

   for(int i = 0 ; i < (m+n) ; i++) {
        cout<<arr[i]<<" , ";
    }

    return 0;

}