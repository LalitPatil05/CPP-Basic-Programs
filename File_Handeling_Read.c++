#include<iostream>
#include<fstream>
using namespace std;
int main(){
    string msg;
    ifstream in("Demo.txt");
    in>>msg;
    cout<<"Content of File is..!!! : ";
    cout<<msg;
    return 0;
}