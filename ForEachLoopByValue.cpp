#include<iostream>
using namespace std;

int main(){
	
	cout<<"For Each Loop Iteration by Value : - "<<endl;;
	
	int nums[] = {1,2,3,4,5};
	
	for(auto it : nums){
		cout<<it<<endl;
	}
	
	return 0;
}