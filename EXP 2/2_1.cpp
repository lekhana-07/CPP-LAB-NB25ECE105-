#include<iostream>
using namespace std;

int area(int side){
    return side*side;
}

int area(int length, int breadth){
    return length*breadth;
}

double area(double base, double height){
    return 0.5*base* height;
}

int main() {
    int side;
    cout << "Enter side of a square" << endl;
    cin >> side;
    cout << "Area of square is " << area(side) << endl;

    int length, breadth;
    cout << "Enter length and breadth of a rectangle" << endl;
    cin >> length >> breadth;
    cout << "Area of rectangle is " << area(length, breadth) << endl;

    double base, height;
    cout << "Enter base and height of a triangle" << endl;
    cin >> base >> height;
    cout << "Area of triangle is " << area(base, height) << endl;

    return 0;
}