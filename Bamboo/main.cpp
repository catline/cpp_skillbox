#include <iostream>


int main()
{
    int dailyGrowth = 50; // ���������� ����;
    int nightFade = 20; // ������ ���������� ���������� ������� �� ���� ����;
    int beginHeight = 100; // ��������� ������ �������.
    int CurrentHeight = 0;

    CurrentHeight = beginHeight + dailyGrowth - nightFade;
    CurrentHeight += dailyGrowth - nightFade;
    CurrentHeight += dailyGrowth / 2;

    std::cout << "In the middle of third day height of bamboo will be: " << CurrentHeight;
    return 0;
}
