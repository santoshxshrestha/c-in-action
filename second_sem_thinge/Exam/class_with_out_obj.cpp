#include <iostream>

class Counter {
    public:
        static int count; 
};

int Counter::count = 0; 

int main() {
    Counter::count++;
    std::cout << "Count: " << Counter::count << std::endl; // Prints 1
    return 0;
}
