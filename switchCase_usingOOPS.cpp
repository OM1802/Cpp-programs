// cpp code using onject amd classes for switch case
#include <iostream>

enum Operation {
    ADD,
    SUBTRACT,
    MULTIPLY,
    DIVIDE
};

class Calculator {
public:
    double performOperation(Operation op, double a, double b) {
        switch(op) {
            case ADD:
                return add(a, b);
            case SUBTRACT:
                return subtract(a, b);
            case MULTIPLY:
                return multiply(a, b);
            case DIVIDE:
                return divide(a, b);
            default:
                std::cerr << "Invalid operation!" << std::endl;
                return 0.0;
        }
    }

private:
    double add(double a, double b) {
        return a + b;
    }

    double subtract(double a, double b) {
        return a - b;
    }

    double multiply(double a, double b) {
        return a * b;
    }

    double divide(double a, double b) {
        if (b != 0) {
            return a / b;
        } else {
            std::cerr << "Division by zero!" << std::endl;
            return 0.0;
        }
    }
};

int main() {
    Calculator calc;
    double num1 = 10.0;
    double num2 = 5.0;

    std::cout << "Addition: " << calc.performOperation(ADD, num1, num2) << std::endl;
    std::cout << "Subtraction: " << calc.performOperation(SUBTRACT, num1, num2) << std::endl;
    std::cout << "Multiplication: " << calc.performOperation(MULTIPLY, num1, num2) << std::endl;
    std::cout << "Division: " << calc.performOperation(DIVIDE, num1, num2) << std::endl;

    return 0;
}
