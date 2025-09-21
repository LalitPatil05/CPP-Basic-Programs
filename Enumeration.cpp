#include <iostream>
using namespace std;

enum Week { Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday };

int main() {
    Week today = Wednesday;
    cout << "Day number: " << today << endl;  // prints 2 (since Monday=0)
    return 0;
}