#include<iostream>
using namespace std;
template<class T>
class Rectangle{
    public:
    T area;
    T length;
    T width;

    void Getdata(){
        cout<<"Enter the Length :";
        cin>>length;
        cout<<"Enter the width :";
        cin>>width;
    }

    T AreaofRectangle(){
        area=length*width;
        cout<<"Area of Rectangle is :"<<area<<endl;
    }
};
int main(){
    Rectangle<int>r1;
    r1.Getdata();
    r1.AreaofRectangle();
    return 0;
}