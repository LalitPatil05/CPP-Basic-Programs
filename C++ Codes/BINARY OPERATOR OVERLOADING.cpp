#include<iostream>
using namespace std;
class time {
	private:
		int hr,min,sec;
		public:
			time(){ //constructor with witohut parameters....
				hr=0;
				min=0;
				sec=0;
			}
		time(int h,int m, int s){ // constructor created with parameters
			hr=h;
			min=m;
			sec=s;
		}
		time operator + (time obj)
		{
			time t;
			t.hr=hr+obj.hr;
			t.min=min+obj.min;
			t.sec=sec+obj.sec;
			return t;
		}
		void printtime(){
			cout<<hr<<":"<<min<<":"<<sec<<":"<<endl;
		}
};
int main(){
	time t1(3,30,35);
	time t2(5,50,15);
	time t3;
	t3=t1+t2;
	cout<<"t1="<<endl;
	t1.printtime();
	cout<<"t2="<<endl;
	t2.printtime();
	cout<<"t1+t2="<<endl;
	t3.printtime();
}