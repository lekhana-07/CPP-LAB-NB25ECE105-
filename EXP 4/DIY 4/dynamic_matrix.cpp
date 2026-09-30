#include <iostream>
using namespace std;

class Matrix {
    int **a;
    int m, n;

public:
  
    Matrix(int x, int y) {
        m = x;
        n = y;

        a = new int*[m];

        for (int i = 0; i < m; i++)
            a[i] = new int[n];
    }

    void input() {
        cout << "Enter elements:\n";
        for (int i = 0; i < m; i++)
            for (int j = 0; j < n; j++)
                cin >> a[i][j];
    }

    void display() {
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++)
                cout << a[i][j] << " ";
            cout << endl;
        }
    }

    Matrix(Matrix &x) {
        m = x.m;
        n = x.n;

        a = new int*[m];

        for (int i = 0; i < m; i++) {
            a[i] = new int[n];

            for (int j = 0; j < n; j++)
                a[i][j] = x.a[i][j];
        }
    }

    ~Matrix() {
        for (int i = 0; i < m; i++)
            delete[] a[i];

        delete[] a;
    }
};

int main() {
    int m, n;

    cout << "Enter rows and columns: ";
    cin >> m >> n;

    Matrix A(m, n);

    A.input();

    cout << "Matrix A:\n";
    A.display();

    Matrix B(A);

    cout << "Copied Matrix B:\n";
    B.display();

    return 0;
}
