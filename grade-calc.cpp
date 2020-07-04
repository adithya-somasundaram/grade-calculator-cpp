#include "calc.hpp"

#include <iostream>

int main()
{
    std::cout << std::endl
              << "--- Welcome to my grade calculator! ---" << std::endl;
    std::cout << std::endl
              << "Enter your grade, followed by its weight." << std::endl;
    std::cout << "Enter any non-number to continue." << std::endl
              << std::endl;

    double grade, percentage, totalGrade, totalPercent;
    while (1)
    {
        std::cout << "Enter your assignment grade: ";
        std::cin >> grade;
        if (std::cin.fail())
        {
            std::cin.clear();
            std::cin.ignore(32767, '\n');
            break;
        }
    }
}