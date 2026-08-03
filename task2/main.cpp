#ifdef _WIN32
#include <windows.h>
#endif

#include <iostream>

int power(int value, int exponent)
{
    int result = 1;

    for (int i = 0; i < exponent; ++i)
    {
        result *= value;
    }

    return result;
}

int main()
{
#ifdef _WIN32
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
#endif

    int value = 5;
    int exponent = 2;
    int result = power(value, exponent);
    std::cout << value << " в степени " << exponent << " = " << result << std::endl;

    value = 3;
    exponent = 3;
    result = power(value, exponent);
    std::cout << value << " в степени " << exponent << " = " << result << std::endl;

    value = 4;
    exponent = 4;
    result = power(value, exponent);
    std::cout << value << " в степени " << exponent << " = " << result << std::endl;

    return 0;
}
