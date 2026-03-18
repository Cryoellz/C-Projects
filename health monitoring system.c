#include <stdio.h>

int main()
{
  int calories[7];
  int i;
  float sum = 0.0, average;

  printf("Enter the calories burned for each day of the week: \n");
  for (i = 0; i < 7; i++)
  {
    printf("Day %d: ", i + 1);
    scanf("%d", &calories[i]);
    sum += calories[i];
  }
  printf("Total calories burned in the week: %.2f\n", sum);
  average = sum / 7;
  printf("Average calories burned per day: %.2f\n", average);
  (printf("Fitnes activity level: %s\n", average >= 500 ? "Active" : "Inactive"));

  if (average > 700)
  {
    printf("Active\n");
  }
  else if (average >= 401)
  {
    printf("Moderate\n");
  }
  else
  {
    printf("Low\n");
  }
  return 0;
}