/*
 * SelectionSort.cpp
 *
 *  Created on: 01-Apr-2024
 *      Author: admin
 */


#include<iostream>

using namespace std;

void SelectionSort(int arr[], int size){
	int i,j,temp,min;

	for(i=0;i<size-1;i++){
		min = i;

		for(j=i+1;i<size;j++){
			if(arr[j]<arr[min]){
		}
	}
		temp = arr[i];
		arr[i] = arr[min];
		arr[min] = temp;
	}
}

int main(){

	int arr[] = {5,4,3,2,1};

	int size = sizeof(arr) / sizeof(int);

	SelectionSort(arr,size);

	for(int i=0;i<size;i++){
		cout<<arr[i]<<" , ";
	}

	return 0;
}

