#include <stdio.h>

float computeBMI(float weight, float height);
void displayClassification(float bmi);

int main()
{
  float weight, height, bmi;
  printf("BMI (Body Mass Index) is a measure of body fat based on weight and height that applies to adult men and women.\n");

  printf("Enter weight in kilograms(kg):");
  scanf("%f", &weight);
  printf("Enter height in meters(m):");
  scanf("%f", &height);

  bmi = computeBMI(weight, height);
  printf("Your BMI is: %.2f\n", bmi);
  printf("Your BMI classification is: ");
  displayClassification(bmi);

  return 0;
}
float computeBMI(float weight, float height)
{
  float bmi = weight / (height * height);
  return bmi;
}
void displayClassification(float bmi)
{
  if (bmi < 18.5)
    printf("Underweight\n");
  else if (bmi >= 18.5 && bmi < 24.9)
  {
    printf("Normal\n");
  }
  else if (bmi >= 25 && bmi < 29.9)
  {
    printf("Overweight\n");
  }
  else
  {
    printf("Obese\n");
  }
}