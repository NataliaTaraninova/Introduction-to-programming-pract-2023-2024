#include <iostream>

int main()
{
    //Exercise 2
    double firstSide;
    std::cout <<"First side: ";
    std::cin >> firstSide;

   double secondSide;
    std::cout << "Second side: ";
    std::cin >> secondSide;


   double p = 2*firstSide+2*secondSide;//The perimeter of the rectangle

   double s = firstSide * secondSide;// The area of the rectangle

   std::cout << "The perimeter of the rectangle is: " << p << std:: endl;
   std::cout << "The area of the rectangle is: "<<s;

}


