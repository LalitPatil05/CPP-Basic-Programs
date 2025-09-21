#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ifstream File("D:\\CS II TUTORIAL\\Demo.txt");

    string line;

    while(getline(File,line)){
        cout<<line<<endl;
    }

    File.close();

    return 0;
}