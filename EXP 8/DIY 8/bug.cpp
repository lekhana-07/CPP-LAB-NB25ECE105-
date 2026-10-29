
#include <iostream>
using namespace std;

class Base {
public:
#ifdef FIX
    virtual ~Base() { cout << "Base destroyed\n"; }
#else
    ~Base() { cout << "Base destroyed\n"; }   
#endif
};

class Derived : public Base {
    int* data;
public:
    Derived() { data = new int[100]; }        
    ~Derived() { delete[] data; cout << "Derived destroyed\n"; }
};

int main() {
    Base* p = new Derived();
    delete p;   
}