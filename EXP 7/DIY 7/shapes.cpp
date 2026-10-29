#include <iostream>
#include <string>

class Shape {
protected:
    std::string color;
public:
    Shape(std::string c) : color(c) {
        std::cout << "[1] Shape constructor called (Color initialized)\n";
    }
};

class Polygon : public Shape {
protected:
    int sides;
public:
    Polygon(std::string c, int s) : Shape(c), sides(s) {
        std::cout << "[2] Polygon constructor called (Sides initialized)\n";
    }
};

class Rectangle : public Polygon {
private:
    double area;
public:
    Rectangle(std::string c, int s, double a) : Polygon(c, s), area(a) {
        std::cout << "[3] Rectangle constructor called (Area initialized)\n";
    }

    void display() const {
        std::cout << "\nRectangle details -> Color: " << color 
                  << ", Sides: " << sides 
                  << ", Area: " << area << "\n";
    }
};

int main() {
    std::cout << "--- Creating a Rectangle Object ---\n";
    Rectangle rect("Red", 4, 50.5);
    
    rect.display();
    return 0;
}
