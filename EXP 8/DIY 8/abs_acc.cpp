#include <iostream>
using namespace std;

class Account {
protected:
    double balance;
public:
    Account(double b) : balance(b) {}
    virtual double calculateInterest() const = 0; 
    virtual ~Account() {}
};

class Savings : public Account {
public:
    Savings(double b) : Account(b) {}
    double calculateInterest() const override { return balance * 0.04; }  
};

class Current : public Account {
public:
    Current(double b) : Account(b) {}
    double calculateInterest() const override { return balance * 0.01; }
};

int main() {
    Account* accounts[] = { new Savings(10000), new Current(20000), new Savings(5000) };

    for (Account* a : accounts) {
        cout << "Interest: " << a->calculateInterest() << endl;
        delete a;
    }
    return 0;
}