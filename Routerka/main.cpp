#include <iostream>

int main()
{
    int cash = 0;
    int ticketCost = 20;
    int driverSalaryPart = 4;
    int feulCostPart = 5;
    int carRepairCostPart = 5;
    int taxPart = 5;

    int passengersEntered;
    int passengersLeaved;
    int passengersCount = 0;
    int yourProfit = 0;


    std::string stop1 = "Programmer's street";
    std::string stop2 = "Algorithm avenue";
    std::string stop3 = "Factory 'Red developer'";
    std::string stop4 = "C plus plus street";

    std::cout << "Arriving to the stop: " << stop1 << "\n";
    std::cout << "How many passengers entered?: ";
    std::cin >> passengersEntered;
    std::cout << "How many passengers leaved: ";
    std::cin >> passengersLeaved;
    passengersCount += passengersEntered - passengersLeaved;
    cash += passengersEntered*ticketCost;
    std::cout << "Leaving " << stop1 << ". There is "<< passengersCount << " in the cabin.\n";

    std::cout << "Arriving to the stop: " << stop2 << "\n";
    std::cout << "How many passengers entered?: ";
    std::cin >> passengersEntered;
    std::cout << "How many passengers leaved: ";
    std::cin >> passengersLeaved;
    passengersCount += passengersEntered - passengersLeaved;
    cash += passengersEntered*ticketCost;
    std::cout << "Leaving " << stop2 << ". There is "<< passengersCount << " in the cabin.\n";

    std::cout << "Arriving to the stop: " << stop3 << "\n";
    std::cout << "How many passengers entered?: ";
    std::cin >> passengersEntered;
    std::cout << "How many passengers leaved: ";
    std::cin >> passengersLeaved;
    passengersCount += passengersEntered - passengersLeaved;
    cash += passengersEntered*ticketCost;
    std::cout << "Leaving " << stop3 << ". There is "<< passengersCount << " in the cabin.\n";

    std::cout << "Arriving to the stop: " << stop4 << "\n";
    std::cout << "How many passengers entered?: ";
    std::cin >> passengersEntered;
    std::cout << "How many passengers leaved: ";
    std::cin >> passengersLeaved;
    passengersCount += passengersEntered - passengersLeaved;
    cash += passengersEntered*ticketCost;
    std::cout << "Leaving " << stop4 << ". There is "<< passengersCount << " in the cabin.\n";

    std::cout << "Total cash: " << cash << "\n";
    std::cout << "Driver salary: " << cash/driverSalaryPart << "\n";
    std::cout << "Fuel cost: " << cash/feulCostPart << "\n";
    std::cout << "Tax: " << cash/taxPart << "\n";
    std::cout << "Car repair cost: " << cash/carRepairCostPart << "\n";
    yourProfit = cash - cash/driverSalaryPart;
    yourProfit -= cash/feulCostPart;
    yourProfit -= cash/taxPart;
    yourProfit -= cash/carRepairCostPart;

    std::cout << "Your total profit: " << yourProfit << "\n";

    return 0;
}
