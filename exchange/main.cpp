#include <iostream>

int main()
{
    int a = 42;
    int b = 153;
    std::cout << "a: " << a << "\n";
    std::cout << "b: " << b << "\n";

    std::cout << "swap values...\n";
    std::swap (a, b);

    std::cout << "a: " << a << "\n";
    std::cout << "b: " << b << "\n";
    return 0;
}
