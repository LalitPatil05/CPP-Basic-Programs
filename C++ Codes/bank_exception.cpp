#include<iostream>
#include<stdexcept>
using namespace std;
int main(){

int balance = 1000;

try{
	int amount;
        //deposit...

    cout<<"Enter the Deposit Amount :";
    cin>>amount;

    if(amount<=0){
        cout<<"Invalid Deposit Amount"<<endl;
    }

    balance = balance + amount;
    cout<<"Available Balance is :"<<balance<<endl;

            //withdrawn...

    cout<<"Enter the Withdrawn Amount :";
    cin>>amount;

    if(amount>balance)
    {
        cout<<"Insuffecient Fund"<<endl;
    }
    
    balance = balance - amount;
    cout<<"Available Balance is :"<<balance<<endl;
}
    catch(exception e){
        cout<<e.what();
    }


}