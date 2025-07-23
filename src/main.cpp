#include <chrono>
#include <thread>

int main() {
    std::cout << "Starting Trading System..." << std::endl;

    // Keep the app alive (for debugging or logs)
    while (true) {
        std::this_thread::sleep_for(std::chrono::seconds(10));
    }

    return 0;
}
