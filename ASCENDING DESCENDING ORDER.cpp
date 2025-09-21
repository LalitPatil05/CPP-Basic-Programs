// Q.12) WRITE A C++ PROGRAM TO CREATE SORT ARRAY ELEMENT IN THE ASCENDING/DESCENDING ORDER....
#include<iostream>
using namespace std;
int main(){
	int man;
	int num[100], n;
	int i,j;
	
	cout<<"enter n for the numbers you want to sort"<<endl<<endl;
	cin>>n;
	for(i=0;i<n;i++){
		cout<<"Enter number :"<<endl;
		cin>>num[i];
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(num[i]<num[j]){
				man=num[i];
				num[i]=num[j];
				num[j]=man;
			}
		}
	}
	cout<<"ascending order elements is :"<<endl;
	for(i=0;i<n;i++){
		cout<<" "<<num[i]<<endl;;
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(num[i]>num[j]){
				man=num[i];
				num[i]=num[j];
				num[j]=man;
			}
		}
	}
	cout<<" descending oreder elements is :"<<endl;
	for(i=0;i<n;i++){
		cout<<" "<<num[i]<<endl;
	}
	return 0;
}