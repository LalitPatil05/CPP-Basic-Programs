#include<iostream>
using namespace std;

int main(){
    int arr[10] = {1,2,3,4,5};


    cout<<"Size of Array is : "<<sizeof(arr)<<endl;
    cout<<"Elements Presents in Array is : "<<sizeof(arr)/sizeof(int)<<endl;

    cout<<"Elements Are : ";
    for (int i = 0; i < 10; i++)
    {
        cout<<arr[i]<<" , ";
    }
    

    return 0;
}