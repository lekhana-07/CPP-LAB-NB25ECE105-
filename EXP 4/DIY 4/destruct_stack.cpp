#include <iostream>
using namespace std;

class Stack {
    int *a, top, size;

public:
    Stack(int n) {
        size = n;
        top = -1;
        a = new int[size];
    }

    void push(int x) {
        if (top < size - 1)
            a[++top] = x;
        else
            cout << "Stack Overflow\n";
    }

    void pop() {
        if (top >= 0)
            cout << "Popped: " << a[top--] << endl;
        else
            cout << "Stack Underflow\n";
    }

    ~Stack() {
        delete[] a;
    }
};

int main() {
    int n, x;

    cout << "Enter stack size: ";
    cin >> n;

    Stack s(n);

    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> x;
        s.push(x);
    }

    s.pop();

    return 0;
}
