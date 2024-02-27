#include<iostream>
using namespace std;
class A{
        public:
            void show()
            {
                cout<<"Base class is ionvoked"<<endl;
            }
        
};
class B : public A{
            public:
                void show()
                {
                    cout<<"Derived class is invoked"<<endl;
                }
};
int main(){
    A* a;
    B Obj;
    a = &Obj;
    a->show();
    return 0;
}