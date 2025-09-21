// C++ USING PRIVATE ACCESS MODIFIER,,,, IT IS A DEFAULT ACCESS SPECIFIER......
#include<iostream>
using namespace std;
class sample{
	public:
		int x;
		private:
			int y;
};
int main(){
	sample obj;
	sample object;
	
	obj.x=21; // allowed this protocol...
	object.y=66; // not allowed this protocol....
}