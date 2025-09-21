#include<iostream>
using namespace std;
void bubblesort(int arr[], int n){
    int i,j;
    for(i=0;i<n;i++){
        //last i elements are already in place
        for ( j = 0; j < n ; j++)
        {
            if(arr[i]>arr[j] + 1)
            swap(arr[i],arr[j+1]);
        }
        
    }
}
//function to print an array...
void printarray(int arr[], int size){
    int i;
    for(i=0;i<size;i++){
        cout<<arr[i]<<" ";
        cout<<endl;
    }
}
//driver code...
int main(){
    int arr[]={5,1,4,2,8};
    int N = sizeof(arr) / sizeof(arr[0]);
    bubblesort(arr,N);
    cout<<"Sorted array is :"<<endl;
    printarray(arr,N);
    return 0;
}