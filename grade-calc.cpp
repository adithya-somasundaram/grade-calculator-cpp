#include "calc.hpp"

#include <iostream>

int main()
{
    std::cout << std::endl
              << "--- Welcome to my grade calculator! ---" << std::endl;
    std::cout << std::endl
              << "Enter your assignment grade, followed by its weight." << std::endl;
    std::cout << "Enter any non-number to continue." << std::endl;

    // will store user inputs, and total grade/weight
    float grade, percentage, totalGrade = {0}, totalPercent = {0};
    while (1)
    {
        // grade input
        std::cout << std::endl
                  << "Enter your assignment grade: ";
        std::cin >> grade;
        // break out of loop if input is non-float
        if (std::cin.fail())
        {
            std::cin.clear();
            std::cin.ignore(32767, '\n');
            break;
        }

        // weight input
        std::cout << "Enter the weight (percentage) of the grade: ";
        std::cin >> percentage;
        // break out of loop if input is non-float
        if (std::cin.fail())
        {
            std::cin.clear();
            std::cin.ignore(32767, '\n');
            break;
        }

        // increment total weight and check that its less than 100
        totalPercent += percentage;
        if (percentage > 100)
        {
            std::cout << "Went over 100% :(" << std::endl;
            return EXIT_FAILURE;
        }
        // increment total grade
        totalGrade += (grade * (percentage / 100));
    }
    remainingGrades(totalGrade, totalPercent);
    return EXIT_SUCCESS;
}