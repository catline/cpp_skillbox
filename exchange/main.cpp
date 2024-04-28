#include <iostream>

int main()
{
    int a = 42;
    int b = 153;
    int c;
    std::cout << "a: " << a << "\n";
    std::cout << "b: " << b << "\n";

    std::cout << "swap values...\n";
    c = a;
    a = b;
    b = c;

    std::cout << "a: " << a << "\n";
    std::cout << "b: " << b << "\n";
    return 0;
}
