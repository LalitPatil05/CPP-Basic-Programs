#include<iostream>
#include<fstream>
using namespace std;

int main(){
	
	ofstream allNum("allNum.txt");
	
	if(!allNum.is_open()){
		cerr<<"Error in File Opening"<<endl;
		return 1;
	}
	else{
		for(int i=1; i<=100; i++){
			allNum<<i<<endl;
		}
		allNum.close();
	}
	
	ifstream inputFile("allNum.txt");
	
	if(!inputFile){
		cerr<<"Error in Opening the File..!!"<<endl;
		return 1;
	}
	
	ofstream evenNum("EvenNum.txt");
	ofstream oddNum("OddNum.txt");
	
	int num;
	
	if(evenNum.is_open() || oddNum.is_open()){
		
		while(inputFile >> num){
			if(num%2==0){
				evenNum<<num<<endl;
			}
			else{
				oddNum<<num<<endl;
			}
		}
		
	}
	
	inputFile.close();
	evenNum.close();
	oddNum.close();
	
	cout<<"File Create Successfully..!!"<<endl;
	cout<<"Numbers are Stored Successfully..!!"<<endl;
	return 0;
	
}