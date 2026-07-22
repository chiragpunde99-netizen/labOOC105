#include <iostream>

namespace arithmetic2
{
    int multiply(int a, int b)
    {
        return a * b;
    }

    int divide(int a, int b)
    {
        if (b == 0)
        {
            std::cout << "Division by zero is not allowed.\n";
            return 0;
        }
        return a / b;
    }
}