#include<iostream>
using namespace std;
class a{
    public:
    a(){
        cout<<"This is a content of class a"<<endl;
    }
};
class b{
    public:
    b(){
        cout<<"This is a content of class b"<<endl;
    }
};
class c : public a, public b{
    public:
    c(){
        cout<<"This is a content of class c"<<endl;
    }
};
class d{
    public:
    d(){
        cout<<"This is a content of class d"<<endl;
    }
};
class e{
    public:
    e(){
        cout<<"This is a content of class e"<<endl;
    }
};
class f : public d, public e{
    public:
    f(){
        cout<<"This is a content of class f"<<endl;
    }
};
class g : public c, public f{
    public:
    g(){
        cout<<"This is a content of class g"<<endl;
    }
};
//main function...
int main(){
    g obj;
    return 0;
}