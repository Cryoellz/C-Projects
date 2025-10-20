#include <stdio.h>

int main()
{
  int income, age, loan_amount; 
//Conditions are Use conditions to check if the user meets the loan criteria:
// Monthly income must be at least P15,000.
// Age must be between 18 and 65.
// Loan amount should not exceed 10 times the monthly income.

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

