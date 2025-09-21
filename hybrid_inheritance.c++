#include<iostream>
using namespace std;
class student{
    protected:
    int rno;
    public:
    void get1(){
        cout<<"Enter the Roll Number :";
        cin>>rno;
    }
    void disp1(){
        cout<<"Student ROll Number is :"<<rno<<endl;
    }
};
class test : public student
{
    protected:
    int t1,t2;
    public:
    void get2(int x, int y){
        t1=x;
        t2=y;
    }
    void disp2(){
        cout<<"The marks of test 1 is :"<<t1<<endl;
        cout<<"The Marks of test 2 is :"<<t2<<endl;
    }
};
class sports{
    protected:
    int score;
    public:
    void get3(int z){
        score=z;
    }
    void disp3()
    {
        cout<<"The Score of Marks is :"<<score<<endl;
    }
};
class result : public test, public sports
{
    int total;
    public:
    void disp4(){
        total=t1+t2+score;
        disp1();
        disp2();
        disp3();
        cout<<"The total of marks is :"<<total<<endl;
    }
};
int main() {
    result r;
    r.get1();
    r.get2(50,60);
    r.get3(50);
    r.disp4();

    return 0;
}