#include <iostream>

namespace arithmetic1
{
    int add(int, int);
    int subtract(int, int);
}

namespace arithmetic2
{
    int multiply(int, int);
    int divide(int, int);
}

int main()
{
    int a, b;

    std::cout << "Enter two numbers: ";
    std::cin >> a >> b;

    std::cout << "Addition = " << arithmetic1::add(a, b) << std::endl;
    std::cout << "Subtraction = " << arithmetic1::subtract(a, b) << std::endl;
    std::cout << "Multiplication = " << arithmetic2::multiply(a, b) << std::endl;
    std::cout << "Division = " << arithmetic2::divide(a, b) << std::endl;

    return 0;
}