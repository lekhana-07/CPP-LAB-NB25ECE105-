#include <iostream>
#include <numeric>

class Fraction {
private:
    int num, den;

        void simplify() {
        int a = num < 0 ? -num : num;
        int b = den < 0 ? -den : den;
        while (b != 0) {
            int t = b;
            b = a % b;
            a = t;
        }
        int g = a; 

        if (g != 0) {
            num /= g;
            den /= g;
        }
        
        if (den < 0) { 
            num = -num;
            den = -den;
        }
    }


public:
    Fraction(int n = 0, int d = 1) : num(n), den(d) {
        if (den == 0) den = 1;
        simplify();
    }

    friend std::ostream& operator<<(std::ostream& os, const Fraction& f) {
        if (f.den == 1) return os << f.num;
        return os << f.num << "/" << f.den;
    }

    friend std::istream& operator>>(std::istream& is, Fraction& f) {
        char slash;
        if (is >> f.num >> slash >> f.den) {
            if (f.den == 0) f.den = 1;
            f.simplify();
        }
        return is;
    }
};

int main() {
    Fraction f;
    std::cout << "Enter a fraction (e.g., 6/8 or -4/12): ";
    if (std::cin >> f) {
        std::cout << "Simplified fraction: " << f << "\n";
    }
}
