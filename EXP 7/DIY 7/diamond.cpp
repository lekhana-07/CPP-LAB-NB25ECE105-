#include <iostream>
#include <string>

class Person {
public:
    std::string name;
    Person(std::string n) : name(n) {
        std::cout << "Person constructor called for: " << name << "\n";
    }
};

class Student : virtual public Person {
public:
    int studentID;
    Student(std::string n, int sid) : Person(n), studentID(sid) {}
};

class Employee : virtual public Person {
public:
    int employeeID;
    Employee(std::string n, int eid) : Person(n), employeeID(eid) {}
};

class TA : public Student, public Employee {
public:
    
    TA(std::string n, int sid, int eid) 
        : Person(n), Student(n, sid), Employee(n, eid) {}

    void showDetails() {
        std::cout << "Name: " << name << " | Student ID: " << studentID 
                  << " | Employee ID: " << employeeID << "\n";
    }
};

int main() {
    std::cout << "--- Creating TA Object ---\n";
    TA ta("Alex", 1234, 5678);
    
    std::cout << "\n--- Displaying TA Details ---\n";
    ta.showDetails();
    return 0;
}
