#include<iostream>
using namespace std;

int main(){
    int i;

    int arr[] = {1,2,3,4,5};

    int arr2[] = {6,7,8};

   int m = 5;
   int n = 3;

   for(i = 0; i < n ; i++){
        arr[m+i] = arr2[i];
   }

    // print Array..........

   for(i=0;i<8;i++){
        cout<<arr[i]<<" , ";
    }

    return 0;
}