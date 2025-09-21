/*
 * InsertionSort.cpp
 *
 *  Created on: 01-Apr-2024
 *      Author: admin
 */

#include<iostream>

using namespace std;

void InsertionSort(int arr[], int size){
	int i,j,min;

	for(i=1;i<size;i++){
		min = arr[i];
		j = i - 1;

			while((min<arr[j]) && (j>=0)){
				arr[j+1] = arr[j];
				j = j - 1;
			}
			arr[j+1] = min;
	}
}

int main(){

	int arr[] = {5,4,3,2,1};
	int size = sizeof(arr) / sizeof(int);

	InsertionSort(arr,size);

	for(int i=0 ; i<size ; i++){
		cout<<arr[i]<<" , ";
	}

	return 0;
}
