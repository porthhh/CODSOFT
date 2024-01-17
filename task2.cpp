// Develop a calculator program that performs basic arithmetic
// operations such as addition, subtraction, multiplication, and
// division. Allow the user to input two numbers and choose an
// operation to perform.

#include <iostream>

int main()
{
    char operation;
    double num1, num2, result;

    std::cout << "Enter two numbers: ";
    std::cin >> num1 >> num2;

    std::cout << "Enter an operation (+, -, *, /): ";
    std::cin >> operation;

    switch (operation)
    {
    case '+':
        result = num1 + num2;
        std::cout << "Result: " << num1 << " + " << num2 << " = " << result;
        break;
    case '-':
        result = num1 - num2;
        std::cout << "Result: " << num1 << " - " << num2 << " = " << result;
        break;
    case '*':
        result = num1 * num2;
        std::cout << "Result: " << num1 << " * " << num2 << " = " << result;
        break;
    case '/':
        if (num2 != 0)
        {
            result = num1 / num2;
            std::cout << "Result: " << num1 << " / " << num2 << " = " << result;
        }
        else
        {
            std::cout << "Error! Division by zero is not allowed.";
        }
        break;
    default:
        std::cout << "Invalid operation!";
    }

    return 0;
}