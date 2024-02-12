#include<iostream>
using namespace std;

class testa{
    protected:
    int a;
    public:
    void geta()
    {
        cout<<"Enter the value of a is :";
        cin>>a;
    }
};

class testb
{   protected:
    int b;
    public:
    void getb(){
       cout<<"enter the value of b is :";
       cin>>b;
    }
};

class testc 
{   
    protected:
    int c;
	public:
		void getc()
        {
            cout<<"enter the value of c is :";
            cin>>c;
        }
};

class arithmetic:public testa,public testb, public testc
{
    public:

    void display()
    {
    cout<<"value of a is :"<<a<<endl;
    cout<<"value of b is :"<<b<<endl;
    cout<<"value of c is :"<<c<<endl;
    }

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
	
    a.geta();
    a.getb();
    a.getc();
    a.display();
    a.adddition();
    a.substraction();
    a.multiplication();
    a.divison();
    
}