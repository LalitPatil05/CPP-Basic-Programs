#include<iostream>
using namespace std;
int main(){
	int n,i;
	int sum=0;
	
	cout<<"Enter the Number :";
	cin>>n;
	
	for(i=0;i<=n;i++){
		sum=sum+i;
	}
	
	cout<<"sum is :"<<sum<<"\n";
	
	return 0;
}