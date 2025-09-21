#include<iostream>
using namespace std;
class basea{
    protected:
    int a;
    public:
    void geta()
    {
        cout<<"Enter the value of a :";
        cin>>a;
    }
    
};

class baseb{
    protected:
    int b;
    public:
    void getb()
    {
        cout<<"Enter the value of b :";
        cin>>b;
    }
   
};

class derived:public basea,public baseb
{   
    public:
    void display()
    {   
        cout<<"value of a is :"<<a<<endl;
        cout<<"value of b is :"<<b<<endl;
        cout<<"addition is :"<<a+b<<endl;
    }

};

    int main()
    {
        derived d;

        d.geta();
        d.getb();

        d.display();
    }