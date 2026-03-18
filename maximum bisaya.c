#include <stdio.h>

int main()
{
    int studentGrades[3][4] = {
        {85, 90, 78, 92},
        {88, 92, 85, 90},
        {90, 85, 92, 88}};

    for (int i = 0; i < 3; i++)
    {
        int maxGrade = studentGrades[i][0]; // Assume the first grade is the highest
        int minGrade = studentGrades[i][0]; // Assume the first grade is the lowest
        for (int j = 1; j < 4; j++)
        {
            if (studentGrades[i][j] > maxGrade)
            {
                maxGrade = studentGrades[i][j]; // Update maxGrade if a higher grade is found
            }
            if (studentGrades[i][j] < minGrade)
            {
                minGrade = studentGrades[i][j]; // Update minGrade if a lower grade is found
            }
        }
        printf("The highest grade for student %d is: %d\n", i + 1, maxGrade);
        printf("The lowest grade for student %d is: %d\n", i + 1, minGrade);
    }
    return 0;
}