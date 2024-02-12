#include<iostream>
#include<stdexcept>
using namespace std;
int main(){

int balance = 1000;
int amount;

try{
        //deposit...

    cout<<"Enter the Deposit Amount :";
    cin>>amount;

    if(amount<=0){
        throw invalid_argument("Invalid Deposit Amount :");
    }

    balance = balance + amount;
    cout<<"Available Balance is :"<<balance<<endl;

            //withdrawn...

    cout<<"Enter the Withdrawn Amount :";
    cin>>amount;

    if(amount>balance)
    {
        throw runtime_error("Insuffecient Fund ");
    }

    balance = balance - amount;
    cout<<"Available Balance is :"<<balance<<endl;
}
    catch(exception& e){
        cout<<e.what();
    }


}