#include<iostream>
using namespace std;
class test{
    public:
    int a,b;

    void getdata()
    {
        cout<<"Enter the value of a :";
        cin>>a;
        cout<<"Enter the value of b :";
        cin>>b;
    }
};

class test1 : public test
{
    public:
    void display(){
        cout<<"value of a is :"<<a<<endl;
        cout<<"value of b is :"<<b<<endl;
    }


};

class test2 : public test1
{
    public:
    void avg()
    {
        cout<<"Average is :"<<a+b/2<<endl;
    }
};

class arithmetic : public test2
{
    public :

    void adddition()
    {
        cout<<"Addition is :"<<a+b<<endl;
    }

    void substraction()
    {
        cout<<"substraction is :"<<a-b<<endl;
    }
    
    void multiplication()
    {
        cout<<"Multiplication is :"<<a*b<<endl;
    }

    void divison()
    {
        cout<<"Divison is :"<<a/b<<endl;
    }
};

int main(){

    arithmetic a;
    
    a.getdata();
    a.display();
    a.avg();
    a.adddition();
    a.substraction();
    a.multiplication();
    a.divison();

}