// Q.14) WRITE A C++ PROGRAM TO FIND THE MAXIMUM AND MINIMUM NUMBER FROM ARRAY OF 10 ELEMENTS...
#include<iostream>
using namespace std;
int main(){
	int arr[10]={2,5,7,9,1,4,8,6,3,0};
	int i,max,min;
	max = arr[0];
	min = arr[0];
	
	for(i=1;i<10;i++)
	{
		if(arr[i]>max){
			max=arr[i];
		}
		if(arr[i]<min){
			min=arr[i];
		}
	}
	cout<<"Maximum Element is :"<<max<<endl;
	cout<<"Minimum Element is :"<<min<<endl;
}