#include<iostream>
using namespace std;
class MyClass { 
 public: // Public access specifier 
 int x=20; // Public attribute 
private: // Private access specifier 
 int y=50; // Private attribute
}; 
int main() { 
 MyClass myObj; 
 myObj.x = 20; // Allowed (public) 
 //myObj.y = 50; // Not allowed (private) 
 return 0; 
} 