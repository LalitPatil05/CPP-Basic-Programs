#include<iostream>
using namespace std;
class add
{
    public:
    int a;
    int b;
    int sum;

    add()
    {
        a=5;
        b=7;
        sum=a+b;
        cout<<"Sum is :"<<sum<<endl;
    }
};

int main()
{
    add a1;
}