#include<iostream>
using namespace std;
class shape{
    //base class..
    protected:
    int width;
    int height;
    public:
    void setWidheight(int w,int h)
    {
        width=w;
        height=h;
    }
};
class rect : public shape
{
    //derived class
    public:
    int getarea()
    {
        return (width*height);
    }
};
int main()
{
    rect r;
    r.setWidheight(8,5);
    cout<<"Calculated area :"<<r.getarea()<<endl; //display the area of object...
    return 0;
}