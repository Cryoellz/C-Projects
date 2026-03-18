#include <stdio.h>

#define NUM_ACTIVITIES 3
#define NUM_DAYS 7

int main()
{

  float totalDuration = 0;
  float averageDuration = 0;

  int exerciseData[NUM_ACTIVITIES][NUM_DAYS] = {
      {30, 35, 30, 25, 30, 30, 40},
      {45, 50, 45, 40, 45, 45, 55},
      {40, 45, 40, 35, 40, 40, 50}};

  // calculate average
  for (int i = 0; i < NUM_ACTIVITIES; i++)
  {
    for (int j = 0; j < NUM_DAYS; j++)
    {
      totalDuration += exerciseData[i][j];
    }

    // calculate average
    printf("Activity: %d", i + 1);
    averageDuration = (float)totalDuration / NUM_DAYS;
    printf("\nAverage Duration: %.1f minutes\n", averageDuration);
    totalDuration = 0;

    // recommendations
    printf("Recommendation: ");
    if (averageDuration < 40)
    {
      printf("Increase intensity for better results.  \n");
    }
    else if (averageDuration > 40 && averageDuration < 50)
    {
      printf("Maintain current level \n");
    }
    else
    {
      printf("Excellent! Maintain current level \n");
    }
    printf("\n");
  }

  printf("\nOverall Performance: \n");
  for (int i = 0; i < NUM_ACTIVITIES; i++)
  {
    for (int j = 0; j < NUM_DAYS; j++)
    {
      totalDuration += exerciseData[i][j];
    }
  }
  averageDuration = totalDuration / (NUM_DAYS * 3);
  printf("Average Duration: %.1f minutes", averageDuration);

  return 0;
}