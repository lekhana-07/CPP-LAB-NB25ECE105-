#include <iostream>
using namespace std;

class Tracer {
public:
    Tracer() {
        cout << "Tracer Created\n";
    }

    ~Tracer() {
        cout << "Tracer Deleted\n";
    }
};

int main() {
    int n, choice;

    cout << "Enter number of Tracers: ";
    cin >> n;

    cout << "Enter 1 to delete, 0 to forget delete: ";
    cin >> choice;

    for (int i = 0; i < n; i++) {
        Tracer *t = new Tracer();

        if (choice == 1)
            delete t;
    }

    return 0;
}
