#include <iostream>


int main()
{
    int dailyGrowth = 50; // ежедневный рост;
    int nightFade = 20; // размер съедаемого гусеницами бамбука за одну ночь;
    int beginHeight = 100; // начальная высота бамбука.
    int CurrentHeight = 0;

    CurrentHeight = beginHeight + dailyGrowth - nightFade;
    CurrentHeight += dailyGrowth - nightFade;
    CurrentHeight += dailyGrowth / 2;

    std::cout << "In the middle of third day height of bamboo will be: " << CurrentHeight;
    return 0;
}
