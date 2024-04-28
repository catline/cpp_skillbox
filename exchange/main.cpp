#include <iostream>

int main()
{
    int a = 42;
    int b = 153;
    std::cout << "a: " << a << "\n";
    std::cout << "b: " << b << "\n";

    std::cout << "swap values...\n";
    b += a;
    a = b - a;
    b = b - a;

    std::cout << "a: " << a << "\n";
    std::cout << "b: " << b << "\n";
    return 0;
}
