#include<iostream>
#include<fstream>
using namespace std;

int main(){
    fstream MyFile;

    MyFile.open("MyFile.txt",ios :: out);

    if(!MyFile){
        cout<<"File is Not Created...!\n";
    }
    else{
        cout<<"File is Created..!!\n";
        MyFile.close();
    }

    return 0;
}