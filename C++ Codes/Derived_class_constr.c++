#include<iostream>
using namespace std;
class rect{
    public:
    int height;
    int width;

    rect(){
        cout<<"Enter the height :";
        cin>>height;
        cout<<"Enter the width :";
        cin>>width;
    }
};
class area : public rect{
    public:
    int are;
    area(){
        cout<<"area is :"<<height*width<<endl;
    }
};
class disp : public area{
    public:
    disp(){
    cout<<"height is :"<<height<<endl;
    cout<<"width is :"<<width<<endl;
    cout<<"re print the area is :"<<are<<endl;
    }
};
int main(){
    disp d1;
}