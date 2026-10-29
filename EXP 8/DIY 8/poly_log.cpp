#include <iostream>
#include <string>
using namespace std;

class Logger {
public:
    virtual void write(string msg) = 0;
};

class ConsoleLogger : public Logger {
public:
    void write(string msg) { cout << "Console: " << msg << endl; }
};

class FileLogger : public Logger {
public:
    void write(string msg) { cout << "File: " << msg << endl; }  
};

int main() {
    ConsoleLogger c;
    FileLogger f;

    Logger* log = &c;
    log->write("Hello");

    log = &f;  
    log->write("Hello");
}