#include <iostream>
#include <stdexcept>

template <typename T>
class SafeArray {
private:
    T* data;
    size_t array_size;

public:

    SafeArray(size_t size) : array_size(size), data(new T[size]()) {}

    ~SafeArray() { delete[] data; }

    T& operator[](size_t index) {
        if (index >= array_size) {
            throw std::out_of_range("Memory Access Error: Index out of bounds!");
        }
        return data[index];
    }

    size_t size() const { return array_size; }
};

int main() {
    try {
        
        SafeArray<double> arr(3);
        arr[0] = 5.5;
        arr[1] = 10.5;

        std::cout << "Valid access: " << arr[0] << "\n";
       
        std::cout << "Invalid access: " << arr[5] << "\n";
    } 
    catch (const std::out_of_range& e) {
        std::cerr << "Caught Exception: " << e.what() << "\n";
    }
    return 0;
}
