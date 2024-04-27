#include <iostream>

using namespace std;
int main()
{
    string name;
    string race;
    cout << "Welcome to the World of Minecraft!" << "\n";
    cout << "Enter the name of your character: ";
    cin >> name;
    cout << "Enter his race: ";
    cin >> race;
    cout << "______Building character_____\n";
    cout << "A new " << race << " was borned. His name is " << name << ". Welcome to this sick sad world, " << name << "!";
    return 0;
}
