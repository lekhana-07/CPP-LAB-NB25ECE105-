#include <iostream>
using namespace std;

class Money {
    int rupees, paise;

public:
    Money(int r, int p) {
        rupees = r + p / 100;
        paise = p % 100;
    }

    Money operator+(Money m) {
        return Money(rupees + m.rupees, paise + m.paise);
    }

    Money operator-(Money m) {
        int a = rupees * 100 + paise;
        int b = m.rupees * 100 + m.paise;
        return Money((a - b) / 100, (a - b) % 100);
    }

    void display() {
        cout << rupees << " rupees " << paise << " paise\n";
    }
};

int main() {
    Money m1(10, 80), m2(5, 50);

    Money sum = m1 + m2;
    Money diff = m1 - m2;

    cout << "Addition: ";
    sum.display();

    cout << "Subtraction: ";
    diff.display();

    return 0;
}