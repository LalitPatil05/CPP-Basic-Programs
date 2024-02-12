#include<iostream>
using namespace std;
class student{
    protected:
    int rno;
    public:
    void get1();
    void disp();
};
void student :: get1()
{
    cout<<"Enter the Roll Number :";
    cin>>rno;
}
void student :: disp()
{
    cout<<"The Roll Number is :"<<rno<<endl;
}
class test : public student   /// derived class for student class
{
    protected:
    int m1,m2;
    public:
    void getmarks()
    {
        cout<<"Enter the Marks for M1 :";
        cin>>m1;
        cout<<"Enter the Marks for M2 :";
        cin>>m2;
    }
    void displaymarks()
    {
        cout<<"The Marks of subject1 is :"<<m1<<endl;
        cout<<"The marks of subject2 is :"<<m2<<endl;
    }
};
class result : public test // derived class for test class
{
    float total;
    float average;
    float percentages;
    public:
    void display()
    {
        total=m1+m2;
        average=m1+m2/2;
        percentages=total/200*100;
        disp();
        displaymarks();
        cout<<"The total of marks is :"<<total<<endl;
        cout<<"The Average is :"<<average<<endl;
        cout<<"Percentages is :"<<percentages<<endl;
        if(percentages<35)
        {
            cout<<"Sorry you are Fail"<<endl;
        }
        else if(percentages>35)
        {
            cout<<"Congratulations you are Pass"<<endl;
        }
    }
};
int main()
{
    result r;
    r.get1();
    r.getmarks();
    r.display();
    return 0;
}