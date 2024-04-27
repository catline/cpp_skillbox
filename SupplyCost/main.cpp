#include <iostream>

int main() {

 int productCost;
 int deliveryCost;
 int discount;

 std::cout << "Let's calculate total purchase cost\n" ;
 std::cout << "Enter product cost: " ;
 std::cin >> productCost;
 std::cout << "Enter delivery cost: ";
 std::cin >> deliveryCost;
 std::cout << "Discount: ";
 std::cin >> discount;
 std::cout << "\n---Calculating------\n";
 int price = productCost + deliveryCost - discount;
 std::cout << "Total cost: " << price << "\n";

}
