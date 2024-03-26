#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ofstream FileStream("Test.txt");

    if (FileStream.is_open())
    {
        FileStream<<"Welcome to C++ Programming..!!"<<endl;
        FileStream<<"C++ Tutorial"<<endl;
        FileStream<<"File Handeling in C++"<<endl;
        FileStream.close();
    }

    else{
        cout<<"File Opening is Fail....!!"<<endl;
    }
    
    return 0;
    
}