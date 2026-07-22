#include <iostream>

namespace arithmetic1
{
    int add(int a, int b)
    {
        return a + b;
    }

    int subtract(int a, int b)
    {
        return a - b;
    }
}

namespace arithmetic2
{
    int multiply(int, int);
    int divide(int, int);
}

int main()
{
    
    int a = 20, b = 5;

    std::cout << "Addition = " << arithmetic1::add(a, b) << std::endl;
    std::cout << "Subtraction = " << arithmetic1::subtract(a, b) << std::endl;
    std::cout << "Multiplication = " << arithmetic2::multiply(a, b) << std::endl;
    std::cout << "Division = " << arithmetic2::divide(a, b) << std::endl;

    return 0;
}