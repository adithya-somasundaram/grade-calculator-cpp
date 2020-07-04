#include <iostream>

void remainingGrades(float current_grade, float weight)
{
    float percent_left = 100 - weight;
    std::string grades[] = {"A+", "A", "A-", "B+", "B", "B-", "C+", "C", "C-", "D+", "D", "D-", "F"};
    float gradeNums[] = {97, 93, 90, 87, 83, 80, 77, 73, 70, 67, 63, 60};
    float score;

    std::cout << std::endl
              << "--- Results ---" << std::endl;

    for (int i = 0; i < 13; i++)
    {
        if (i == 12)
        {
            score = 100 * (60 - current_grade) / percent_left;
            std::cout << "< 60% (" << grades[i] << "): <" << score << std::endl;
        }
        else
        {
            score = 100 * (gradeNums[i] - current_grade) / percent_left;
            std::cout << gradeNums[i] << "% (" << grades[i] << "): " << score << std::endl;
        }
    }
}