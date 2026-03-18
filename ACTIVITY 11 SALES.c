#include <stdio.h>

float calculateTotal(float sales[], int days);
void performanceEvaluation(float totalSales);

int main()
{
  float dailySales[7];
  float total;

  printf("Enter sales for 7 days:\n");
  for (int i = 0; i < 7; i++)
  {
    printf("Day %d: ", i + 1);
    scanf("%f", &dailySales[i]);
  }
  total = calculateTotal(dailySales, 7);
  printf("Total sales: %.2f\n", total);

  performanceEvaluation(total);
  return 0;
}
float calculateTotal(float sales[], int days)
{
  float sum = 0.0;
  for (int i = 0; i < days; i++)
  {
    sum += sales[i];
  }
  return sum;
}
void performanceEvaluation(float totalSales)
{
  printf("Performance: ");
  if (totalSales > 50000)
  {
    printf("Excellent Performance!\n");
  }
  else if (totalSales >= 20000 && totalSales < 50000)
  {
    printf("Good Performance!\n");
  }
  else
  {
    printf("Needs Improvement!\n");
  }
}