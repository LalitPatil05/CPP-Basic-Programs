// Q.5) WRITE A PROGRAM TO PRINT SQUARE AND CUBE OF NUMBERS FROM 1 TO 20.....
#include<iostream>
using namespace std;
int square(int n);
int cube(int n);
int main(){
	
	int n;
	
	cout<<"-: SQUARE ARE FOLLOWING :-"<<endl;
	square(n);
	
	cout<<"\n\n\n\n\n";
	
	cout<<":- CUBES ARE FOLLOWING :-"<<endl;
	cube(n);
	
}
int square(int n){
	int square;
	for(int i=1;i<=20;i++){
		square=i*i;
		cout<<"square is:"<<square<<endl;
	}
}

int cube(int n){
	int cube;
	for(int i=1;i<=20;i++){
		cube=i*i*i;
		cout<<"cube is :"<<cube<<endl;
	}
}