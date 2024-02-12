#include<iostream>
using namespace std;
int main(){
	int physics,electronics,computer,mathematics,english;
	float average;
	int total;
	float percentage;
	cout<<"enter the physics marks :";
	cin>>physics;
	cout<<"enter the electronics marks :";
	cin>>electronics;
	cout<<"enter the computer marks :";
	cin>>computer;
	cout<<"enter the mathematics marks :";
	cin>>mathematics;
	cout<<"enter the english marks :";
	cin>>english;	
	total=physics+electronics+computer+mathematics+english;
	cout<<"The total marks is :"<<total<<"\n";	
	average=total/5;
	cout<<"The Average is :"<<average<<"\n";
	percentage=(total/5)*100;
	cout<<"Percentages is :"<<percentage<<"\n";	
	return 0;
	
}