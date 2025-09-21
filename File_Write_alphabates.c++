#include<iostream>
#include<fstream>
using namespace std;
int main(){
    char i;
    string alpha;
    ofstream out("ALPHABATE.txt");//create a file in system , file must be exist on your system

    //print the Capital letters in file Demo.txt
    out<<"Capital Letters..!!!"<<endl;
    for(i='A';i<='Z';i++){
        out<<i<<endl;
    }
    
    //print the small Letters in file Demo.txt
    out<<"Small Letters..!!!"<<endl;
    for(i='a';i<='z';i++){
        out<<i<<endl;
    }

    return 0;
}