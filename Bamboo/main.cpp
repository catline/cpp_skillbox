#include <iostream>


int main()
{
    int dailyGrowth = 50; // ���������� ����;
    int nightFade = 20; // ������ ���������� ���������� ������� �� ���� ����;
    int beginHeight = 100; // ��������� ������ �������.
    int CurrentHeight = 0;
    int days;

    std::cout << "How many days bamboo grew: ";
    std::cin >> days;

    CurrentHeight+= beginHeight + (dailyGrowth - nightFade) * days + dailyGrowth / 2;

    std::cout << "In the middle of the day " << days << " height of bamboo will be: " << CurrentHeight;
    return 0;
}
