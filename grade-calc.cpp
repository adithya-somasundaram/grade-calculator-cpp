#include "calc.hpp"

#include <iostream>

int main()
{
    std::cout << std::endl
              << "--- Welcome to my grade calculator! ---" << std::endl;
    std::cout << std::endl
              << "Enter your grade, followed by its weight." << std::endl;
    std::cout << "Enter any non-number to continue." << std::endl;

    float grade, percentage, totalGrade = {0}, totalPercent = {0};
    while (1)
    {
        std::cout << std::endl
                  << "Enter your assignment grade: ";
        std::cin >> grade;
        if (std::cin.fail())
        {
            std::cin.clear();
            std::cin.ignore(32767, '\n');
            break;
        }

        std::cout << "Enter the weight (percentage) of the grade: ";
        std::cin >> percentage;
        if (std::cin.fail())
        {
            std::cin.clear();
            std::cin.ignore(32767, '\n');
            break;
        }
        totalPercent += percentage;
        if (percentage > 100)
        {
            std::cout << "Went over 100% :(" << std::endl;
            return EXIT_FAILURE;
        }
        totalGrade += (grade * (percentage / 100));
    }
    remainingGrades(totalGrade, totalPercent);
    return EXIT_SUCCESS;
}