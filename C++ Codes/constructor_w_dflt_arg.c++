#include<iostream>
using namespace std;
class sum{
    public:
    sum(int x, int y, int z=2, int w=2){
        cout<<"Addition is :"<<x+y+z+w<<endl;
    }
};
int main(){
    sum s1(10,20); //30  34
    sum s2(10,20,30); //60  62
    sum s3(10,20,30,40); //100  100
}