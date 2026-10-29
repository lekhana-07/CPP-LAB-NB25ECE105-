#include <iostream>
#include <string>
#include <vector>

class Employee {
protected:
    std::string name;
    int id;
public:
    Employee(std::string n, int i) : name(n), id(i) {}
    virtual ~Employee() = default; 

    virtual void printDetails() const {
        std::cout << "ID: " << id << " | Name: " << name;
    }
};

class Manager : public Employee {
private:
    int teamSize;
public:
    Manager(std::string n, int i, int ts) : Employee(n, i), teamSize(ts) {}

    void printDetails() const override {
        Employee::printDetails();
        std::cout << " | Role: Manager | Team Size: " << teamSize << "\n";
    }
};

class Engineer : public Employee {
private:
    std::string skill;
public:
    Engineer(std::string n, int i, std::string s) : Employee(n, i), skill(s) {}

    void printDetails() const override {
        Employee::printDetails();
        std::cout << " | Role: Engineer | Skill: " << skill << "\n";
    }
};

int main() {
    std::vector<Employee*> staff;
    staff.push_back(new Manager("Alice", 101, 8));
    staff.push_back(new Engineer("Bob", 102, "C++"));

    for (const auto& emp : staff) {
        emp->printDetails();
    }

    for (auto& emp : staff) {
        delete emp;
    }
    
    return 0;
}
