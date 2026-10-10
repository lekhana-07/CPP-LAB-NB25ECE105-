#include <iostream>
using namespace std;

class Counter {
    int value;
    static int created;
    static int alive;

public:
    Counter() {
        value = 0;
        created++;
        alive++;
    }

    ~Counter() {
        alive--;
    }

    static void show() {
        cout << "Created: " << created << endl;
        cout << "Currently Alive: " << alive << endl;
    }
};

int Counter::created = 0;
int Counter::alive = 0;

int main() {
    int n;

    cout << "Enter number of Counter objects: ";
    cin >> n;

    Counter *c = new Counter[n];

    Counter::show();

    delete[] c;

    cout << "\nAfter deleting objects:\n";
    Counter::show();

    return 0;
}
