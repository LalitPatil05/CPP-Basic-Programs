#include<iostream>
using namespace std;
int main(){
    int i,j;
    int arr[3];
    int arr2[2];

    for(i=0;i<3;i++){
        cout<<"Enter Row Element :";
		cin>>arr[i];
        for(j=0;j<3;j++){
       	cout<<"Enter column Element :";
            cin>>arr2[j];
        }
    }

    for(i=0;i<=3;j++){
       
       for(j=0;j<=3;j++){
        cout<<arr[j];
       }
       cout<<arr2[i];
    }
    
}