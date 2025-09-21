#include<iostream>
using namespace std;

void SetRelation(int arr[], int arr2[], int size){
    int i,j;

    for(i=0;i<size;i++){
        for(j=0;j<size;j++){
            if(arr[j]>arr2[j]){
                int temp;
                temp = arr[j];
                arr[j] = arr2[j];
                arr2[j] = temp;
            }
            cout<<arr[i]<<" , ";
            cout<<arr2[j]<<" , ";
        }
    }


}

int main(){
    int arr[] = {1,2,3,4};
    int arr2[] = {5,6,7,8};
    int size = 4;

    SetRelation(arr,arr2,size);

    return 0;
}