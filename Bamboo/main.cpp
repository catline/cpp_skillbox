#include <iostream>


int main()
{
    int dailyGrowth = 50; // ежедневный рост;
    int nightFade = 20; // размер съедаемого гусеницами бамбука за одну ночь;
    int beginHeight = 100; // начальная высота бамбука.
    int CurrentHeight = 0;
    int days;

    std::cout << "How many days bamboo grew: ";
    std::cin >> days;

    CurrentHeight+= beginHeight + (dailyGrowth - nightFade) * days + dailyGrowth / 2;

    std::cout << "In the middle of the day " << days << " height of bamboo will be: " << CurrentHeight;
    return 0;
}
