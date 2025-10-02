#include <iostream>
using namespace std;

class BankAccount {
private:
    int balance;
public:
    BankAccount(int b = 0) : balance(b) {}

    BankAccount &deposit(int amount) {
        this->balance += amount;
        return *this;   // return current object
    }

    BankAccount &withdraw(int amount) {
        this->balance -= amount;
        return *this;
    }

    void showBalance() {
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    BankAccount acc(1000);
    acc.deposit(500).withdraw(200).deposit(300).showBalance();  
    return 0;
    
}
