/*
 * BubbleSort.cpp
 *
 *  Created on: 01-Apr-2024
 *      Author: Lalit Patil
 */


#include<iostream>

using namespace std;

void BubbleSort(int arr[], int size){
	int i,j;
	for(i=0;i<size;i++){

		for(j=0;j<size;j++){

			if(arr[j]<arr[j+1]){
				int temp;
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
}

int main(){
	int arr[] = {5,4,3,2,1};
	int size = sizeof(arr) / sizeof(int);

	BubbleSort(arr,size);

	for(int i=0;i<size;i++){
		cout<<arr[i]<<" , ";
	}
	return 0;
}
