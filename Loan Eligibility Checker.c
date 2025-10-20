#include <stdio.h>

int main()
{
  int income, age, loan_amount;

  printf("Enter monthly income: ");
  scanf("%d", &income);

  printf("Enter age: ");
  scanf("%d", &age);

  printf("Enter desired loan amount: ");
  scanf("%d", &loan_amount);

  if (income >= 15000 && age >= 18 && age <= 65 && loan_amount <= 10 * income)
  {
    printf("Congratulations! You are eligible for the loan.\n");
  }
  else
  {
    printf("Sorry, you do not meet the loan eligibility requirements.\n");
  }

  return 0;
}
