
#include <iostream>

int main()
{
    // Exercise 6
    int dividend, divisor;
   std::cout << "Enter dividend: ";
   std::cin >> dividend;
   std::cout << "Enter divisor: ";
   std::cin >> divisor;
   int quotient = dividend / divisor;
   int remainder = dividend % divisor;

   std::cout << "Quotient:" << quotient <<std:: endl;
   std::cout << "Remainder:" << remainder;
}

