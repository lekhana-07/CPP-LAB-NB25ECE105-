#include <iostream>
using namespace std;

float volume(float side) {
    return side * side * side;
}

float volume(float length, float breadth, float height) {
    return length * breadth * height;
}

float volume(float radius, float height) {
    return 3.14159 * radius * radius * height;
}

int main() {
    float side, length, breadth, height;
    float radius, cylinderHeight;

    cout << "Enter side of cube: ";
    cin >> side;
    cout << "Volume of Cube = " << volume(side) << endl;

    cout << "\nEnter length, breadth and height of cuboid: ";
    cin >> length >> breadth >> height;
    cout << "Volume of Cuboid = "
         << volume(length, breadth, height) << endl;

    cout << "\nEnter radius and height of cylinder: ";
    cin >> radius >> cylinderHeight;
    cout << "Volume of Cylinder = "
         << volume(radius, cylinderHeight) << endl;

    return 0;
}