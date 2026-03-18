#include <stdio.h>
#include <stdbool.h>

int main()
{
    int studentGrades[3][4] = {
        {85, 90, 78, 92},
        {88, 92, 85, 90},
        {90, 85, 92, 88}};

    int target;
    printf("Enter a value to search for: ");
    scanf("%d", &target);
    bool found = false;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (studentGrades[i][j] == target)
            {
                printf("Value %d found at row %d, column %d\n", target, i + 1, j + 1);
                found = true;
                break;
            }
        }
    }

    if (!found)
    {
        printf("Value %d not found in the array\n", target);
    }

    return 0;
}