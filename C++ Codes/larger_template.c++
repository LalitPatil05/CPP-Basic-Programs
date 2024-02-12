#include<iostream>
using namespace std;
//create a template function...
template <class T>

T Large(T n1 , T n2)
{
    return (n1>n2) ? n1 : n2;
}
int main()
{
    int i1,i2;
    float f1,f2;
    char c1,c2;
    cout<<"Enter two integers :";
    cin>>i1;
    cin>>i2;
    cout<<Large(i1,i2)<<"is Larger."<<endl;
    cout<<"Enter an two Floating Numbers :";
    cin>>f1;
    cin>>f2;
    cout<<Large(f1,f2)<<"is Larger."<<endl;
    cout<<"Enter an Two Characters :";
    cin>>c1;
    cin>>c2;
    cout<<Large(c1,c2)<<"is Larger."<<endl;

    return 0;

}