#include<iostream>
using namespace std;
class addition{
	private:
		int a,b;
	public:
		void getdata();
		addition sum(addition s1, addition s2);
		void display();
};
void addition::getdata(){
	cout<<"Enter the value of a :";
	cin>>a;
	cout<<"Enter the value of b :";
	cin>>b;
}
addition addition :: sum(addition s1,addition s2){
	addition temp;
	temp.a=s1.a+s2.a;
	temp.b=s1.b+s2.b;
	return temp;//return object to calling function.....
}
void addition :: display(){
	cout<<"Sum of A="<<a<<endl;
	cout<<"Sum of B="<<b<<endl;
}
int main(){
	 addition a1,a2,a3;
	 cout<<"First object :"<<endl;
	 a1.getdata();
	 cout<<"Second object :"<<endl;
	 a2.getdata();
	 a3=a3.sum(a1,a2);//passing object as argument...
	 cout<<"Third object values :"<<endl;
	 a3.display();
}