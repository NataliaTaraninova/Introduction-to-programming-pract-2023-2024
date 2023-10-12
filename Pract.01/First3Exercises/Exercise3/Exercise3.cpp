#include <iostream>

int main()
{    //Exercise 3
    std::cout << "Enter your value in lv:";
    double lv;
    std::cin >> lv;

    double euro = lv * 0.51; 
    double dollar = lv * 0.54;

    std::cout << "Converting lv to euro:" << euro << std::endl;
    std::cout << "Converting lv to dollar:" << dollar; 

  
}


