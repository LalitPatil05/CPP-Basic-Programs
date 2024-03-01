#include<iostream>
using namespace std;
class A{
    public:
    void disp()
    {
        cout<<"This is a contetent of clasa A..!!"<<endl;
    }
};
class B : public virtual A{

};
class C : public virtual A{

};
class D : public B , public C{

};
int main()
{
    D Object;
    Object.disp();
    return 0;
}