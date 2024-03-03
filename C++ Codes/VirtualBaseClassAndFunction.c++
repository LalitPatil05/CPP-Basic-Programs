#include<iostream>
using namespace std;
class A{
    public:
   virtual void disp()
    {
        cout<<"Class A is Invoked..!!"<<endl;
    }
};
class B : public virtual A{
	void disp(){
		cout<<"Class B is Invoked..!!"<<endl;
	}

};
class C : public virtual A{
	public:
		void disp(){
			cout<<"Class C is Invoked..!!"<<endl;
		}

};
class D : public B , public C{
	public:
		void disp(){
			cout<<"Class D is Invoked..!!"<<endl;
		}
};
int main()
{
    D Object;
    Object.disp(); // In Which Avoid the Ambugity...
	A *ptr;
	A obj;
	ptr = &obj;
	ptr->disp();
    return 0;
}