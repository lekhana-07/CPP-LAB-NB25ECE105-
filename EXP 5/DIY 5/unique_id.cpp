#include <iostream>
using namespace std;

class Order {
    int id;
    static int nextID;

public:
    Order() {
        id = nextID++;
    }

    void display() {
        cout << "Order ID: " << id << endl;
    }
};

int Order::nextID = 1001;

int main() {
    int n;

    cout << "Enter number of orders: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        Order o;
        o.display();
    }

    return 0;
}
