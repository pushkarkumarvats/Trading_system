#include "httplib.h"
#include <iostream>

int main() {
    httplib::Server svr;

    // Define a simple GET endpoint
    svr.Get("/", [](const httplib::Request&, httplib::Response& res) {
        res.set_content("✅ Real-Time AI Trading System is Running!", "text/plain");
    });

    // Optional: Add a health check endpoint
    svr.Get("/health", [](const httplib::Request&, httplib::Response& res) {
        res.set_content("OK", "text/plain");
    });

    std::cout << "✅ Starting trading system server on port 8080..." << std::endl;

    // Bind to all interfaces on port 8080 (REQUIRED for Render)
    svr.listen("0.0.0.0", 8080);

    return 0;
}
