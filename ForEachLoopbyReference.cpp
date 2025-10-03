#include<iostream>
using namespace std;

int main(){
	
	cout<< "For Each Loop by Reference : - "<<endl;
	
	int nums[] = {1,2,3,4,5};
	
	for(auto &it : nums){
		cout<<it<<endl;
	}
	
	return 0;
	
}