// Q.13) WRITE A C++ PROGRAM TO INPUT 5 SUBJECT MARKS AND CALCULATE TOTAL MARKS, PERCENTAGE & GRADE
// BASED ON FOLLOWING CRITERIA 1) PERCENTAGE LESS THAN 50(GRADE C) 2) PERCENTAGE EQUAL TO 50 AND LESS
// THAN 80(GRADE B) 3) PERCENTAGE EQUAL TO 80 AND MORE THAN 80(GRADE A)......

#include<iostream>
using namespace std;
int main(){
	int english,marathi,maths,physics,computer;
	int total;
	float percentage;
	
	cout<<"*** STATEMENT OF MARKS ***\n";
	
	cout<<endl;
	
	cout<<"Enter the English Marks :";
	cin>>english;
	
	cout<<"Enter the English Marks :";
	cin>>marathi;
	
	cout<<"Enter the English Marks :";
	cin>>maths;
	
	cout<<"Enter the English Marks :";
	cin>>physics;
	
	cout<<"Enter the English Marks :";
	cin>>computer;
	
	cout<<endl;
	
	total = english + marathi + maths + physics + computer;
	
	cout<<"Total Marks is :"<<total<<endl;
	cout<<endl;
	
	percentage = total/5;
	cout<<"Percentage is :"<<percentage<<endl;
	
	cout<<endl;
	
	if(percentage<=50 && percentage>=35){
		cout<<"*** CONGRATULATION ***\n";
		cout<<"GRADE C\t"<<endl;
	}
	else if(percentage==50 && percentage<=80){
		cout<<"*** CONGRATULATION ***\n";
		cout<<"GRADE B\t"<<endl;
	}
	else if(percentage==80 && percentage>=80){
		cout<<"*** CONGRATULATION ***\n";
		cout<<"GRADE A\t"<<endl;
	}
	else if(percentage<35){
		cout<<"*** SORRY! YOU ARE FAIL ***\n";
	}
	
}