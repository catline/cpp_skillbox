#include <iostream>

int main()
{
    std::string login;
    std::string pass;
    std::cout << "Enter login: ";
    std::cin >> login;
    std::cout << "Enter password: ";
    std::cin >> pass;
    std::cout << "Welcome, " << login << "! You successfully logged in.";
    return 0;
}
