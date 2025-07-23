#include <iostream>     //  Fix for std::cout and std::endl
#include <thread>       // For sleep
#include <chrono>       // For sleep duration

int main() {
    std::cout << "Starting Trading System..." << std::endl;

    // Keeps container alive so Render doesn't shut it down
    while (true) {
        std::this_thread::sleep_for(std::chrono::seconds(10));
    }

    return 0;
}
