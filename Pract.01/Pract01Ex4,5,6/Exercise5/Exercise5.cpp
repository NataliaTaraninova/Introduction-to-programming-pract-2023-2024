#include <iostream>

int main()
{ //Exercise 5

	int num1, num2, num3;

	std::cout << "First number: ";
	std::cin >> num1;

	std::cout << "Second number: ";
	std::cin >> num2;

	std::cout << "Third number: ";
	std::cin >> num3;

	bool ascendingOrder = (num1 < num2 < num3) ? 1 : 0;
	std::cout << ascendingOrder;
   
}


