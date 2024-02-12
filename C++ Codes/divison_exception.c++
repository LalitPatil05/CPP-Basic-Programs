#include<iostream>
#include<stdexcept>
using namespace std;

double div(int x, int y)
{
    if(y==0)
    {
        throw "try to divide by zero!!";
    }
    
    return x/y;
}

int main()
{
    int a=10;
    int b=0;
    double c=0;
    try
    {
        double z=div(a,b);
        cout<<"result :"<<z<<endl;
    }

    catch(const char *s)
    {
        cout<<s<<endl;
    }
}