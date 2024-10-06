#include <iostream>
#include <thread> 

void printNumbers(int count) {
    for (int i = 1; i <= count; ++i) {
        std::cout << "Thread: " << i << std::endl;
    }
}

int main() {
    const int count = 5; 

    
    std::thread t(printNumbers, count);

    
    for (int i = 1; i <= count; ++i) {
        std::cout << "Main: " << i << std::endl;
    }

    t.join(); 

    return 0; 
}