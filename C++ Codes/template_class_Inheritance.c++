#include<iostream>
using namespace std;
class base{
    public:
    string name="LALIT PATIL";    
};
template<class T>
class derived : public base
    {   public:

        T *container;
        derived(T var[]){
            container=var;
        }
        void display(){
            cout<<container<<endl;
            cout<<name<<endl;
        }
    };
int main(){
    char msg[50]="My Name is :";
    derived<char>obj(msg);
    obj.display();
    return 0;
}