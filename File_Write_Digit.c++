#include<iostream>
#include<fstream>
using namespace std;
int main(){
    int i;
    
    ofstream out("Digit.txt");
    
    out<<"1 to 100 Digits..!!!"<<endl;

    for(i=1;i<=100;i++)
    {
        if(i==11||i==21||i==31||i==41||i==51||i==61||i==71||i==81||i==91)
        {
            out<<endl;
        }
        out<<i<<"\t";
    }

    return 0;
}