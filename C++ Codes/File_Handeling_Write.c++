#include<iostream>
#include<fstream>
using namespace std;
int main(){
    string msg;
    cout<<"Enter the Message..! :";
    cin>>msg;
    ofstream out("Demo.txt");
    out<<msg;
    return 0;
}