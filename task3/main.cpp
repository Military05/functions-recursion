#ifdef _WIN32
#include <windows.h>
#endif

#include <iostream>

int fibonacci(int number)
{
    if (number == 0)
    {
        return 0;
    }

    if (number == 1)
    {
        return 1;
    }

    return fibonacci(number - 1) + fibonacci(number - 2);
}

int main()
{
#ifdef _WIN32
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
#endif

    int count = 0;

    std::cout << "Введите число: ";
    std::cin >> count;

    if (count < 0)
    {
        std::cout << "Количество чисел не может быть отрицательным." << std::endl;
        return 0;
    }

    std::cout << "Числа Фибоначчи: ";

    for (int i = 0; i < count; ++i)
    {
        std::cout << fibonacci(i);

        if (i + 1 < count)
        {
            std::cout << ' ';
        }
    }

    std::cout << std::endl;

    return 0;
}
