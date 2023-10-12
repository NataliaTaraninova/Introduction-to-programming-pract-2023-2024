#include <iostream>

int main()
{//Exercise 4
    
    double firstSide, secondSide;

    std::cout << "You have a rectangle. Enter the length of the first side: ";
    std::cin >> firstSide;

    std::cout << "Enter the length of the second side: ";
    std::cin >> secondSide;

    double p = 2 * firstSide + 2 * secondSide;// the permieter
    double s = firstSide * secondSide;//the area

    std::cout << "The perimeter of the rectangle is: " << p << std::endl;
    std::cout << "The area of the rectangle is: " << s; 


}


