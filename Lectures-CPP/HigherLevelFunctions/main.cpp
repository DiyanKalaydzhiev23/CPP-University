#include <iostream>
// #include <functional>

using namespace std;

// void (*func)(int&, int&)
// Function that returns a std::function
function<int(int, int)> getOperation(char op) {
    if (op == '+') {
        return [](int a, int b) { return a + b; };
    } else if (op == '-') {
        return [](int a, int b) { return a - b; };
    }
    // Default case, returns a lambda that does nothing special
    return [](int a, int b) { return 0; }; // [] says what variables should be captured
}

int add(int x, int y) {
    return x + y;
}

int subtract(int x, int y) {
    return x - y;
}

int operate(int a, int b, int (*operation)(int, int)) {
    return operation(a, b);
}

int maina() {
    // Immediately executing a lambda to add two numbers
    int sum = [](int a, int b) { return a + b; }(5, 3);
    std::cout << "Sum: " << sum << std::endl;  // Outputs: Sum: 8

    int multiplier = 2;

    // Capture 'multiplier' by value
    auto doubler = [multiplier](int n) { return n * multiplier; };

    std::cout << "Double of 3: " << doubler(3) << std::endl;  // Outputs: Double of 3: 6

    // Call 'operate' with 'add' as an argument
    int result = operate(5, 3, add);
    std::cout << "Result: " << result << std::endl;

    // Get a function that performs addition
    auto add = getOperation('+');
    std::cout << "Addition: " << add(5, 3) << std::endl;

    // Get a function that performs subtraction
    auto subtract = getOperation('-');
    std::cout << "Subtraction: " << subtract(5, 3) << std::endl;

    return 0;
}
