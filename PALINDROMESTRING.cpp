// Q.11) WRITE A PROGRAM TO CHECK GIVEN STRING IS PALINDROME OR NOT....
#include<iostream>
using namespace std;
int main(){
	char string1[20];
	int i, length;
	int flag = 0;
	cout<<"Enter a string :";
	cin>>string1;
	
	length = strlen(string1);
	
	for(i=0;i<length;i++)
	{
		if(string1[i] != string1[length-i-1]){
			flag = 1;
			break;
		}
	}
	if(flag){
		cout<<string1<<" is not a Palindrome"<<endl;
	}
	else{
		cout<<string1 << " is a Palindrome"<<endl;
	}
}
	