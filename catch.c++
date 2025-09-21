#include<iostream>
using namespace std;

int main(){
    int n;
    char str[20]="wrong number used";
    cout<<"enter 1 or 2 :";
    cin>>n;

    try{
        if(n==1)
        {
            throw 9;
        }       
        if(n==2)
        {
            throw 5.5f;
        }
        if(n!=1 || n!=2)
        {
            throw str;
        }
    }

    catch (int x){
    cout<<"Exception occured!"<<endl;
    cout<<"Exception# is :"<<x<<endl;
}

catch (float y){
    cout<<"Exception occured!"<<endl;
    cout<<"Exception# is :"<<y<<endl;
}

catch (...){
    cout<<"A Default Exception caughted!"<<endl;
    cout<<str<<endl;
}


}