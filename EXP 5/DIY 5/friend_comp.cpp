#include <iostream>
using namespace std;

class Time {
    int hh, mm;

public:
    void input() {
        cin >> hh >> mm;
    }

    void display() {
        cout << hh << ":" << mm << endl;
    }

    friend Time laterOf(Time, Time);
};

Time laterOf(Time a, Time b) {
    if (a.hh > b.hh || (a.hh == b.hh && a.mm > b.mm))
        return a;
    return b;
}

int main() {
    Time t1, t2, later;

    cout << "Enter first time (hh mm): ";
    t1.input();

    cout << "Enter second time (hh mm): ";
    t2.input();

    later = laterOf(t1, t2);

    cout << "Later time: ";
    later.display();

    return 0;
}
