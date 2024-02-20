#include<iostream>
#include<fstream>
using namespace std;
int main(){
    int n;
    int i;
    int result;

    ofstream out("Table.txt");

    out<<"1 to 10 Tables..!!!"<<endl;

    for(i=1;i<=10;i++){
        for(n=1;n<=10;n++){
        result=n*i;
        out<<"\t"<<result;
        }
        out<<endl;
    }
    
    return 0;
}