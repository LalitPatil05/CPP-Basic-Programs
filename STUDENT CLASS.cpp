#include<iostream>
using namespace std;
class student{
	public:
		int roll;
		float perc;
		string name;
		double mono;
		string add;
};
int main(){
	class student s;
	// accessing the members..........
	s.roll=11;
	s.perc=95;
	s.name="yogesh";
	s.mono=9770300812;
	s.add="khetia";
	// print the details..........
	cout<<"student roll no is :"<<s.roll<<"\n";
	cout<<"student percentage is :"<<s.perc<<"\n";
	cout<<"student name is :"<<s.name<<"\n";
	cout<<"student mobile no. is :"<<s.mono<<"\n";
	cout<<"student address is :"<<s.add<<"\n";	
}