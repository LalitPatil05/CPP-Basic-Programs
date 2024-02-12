#include<iostream>
using namespace std;
int square(int);
float square(float);
long int square(long int);
int square(int a)
{
	return a*a;

}
float square(float b)
{
	return b*b;
}
long int square(long int c)
{
	return c*c;
}
int main()
{
	int m=square(5);
	cout<<"Square of integer number is :"<<m<<endl;
	float n=square(5.5f);
	cout<<"Square of float number is :"<<n<<endl;
	long int p=square(2000l);
	cout<<"Square of long number is :"<<p<<endl;
	
}