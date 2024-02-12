#include<iostream>
using namespace std;
class base{
	int val1,val2;
	public:
		void get()
		{
			cout<<"Enter the value of a :";
			cin>>val1;
			cout<<"Enter the value of b :";
			cin>>val2;
		}
		friend float mean(base obj);
		
};
float mean(base obj)
		{
			return float(obj.val1+obj.val2)/2;
		}
int main(){
	base obj;
	obj.get();
	cout<<"mean value is :"<<mean(obj);
}
