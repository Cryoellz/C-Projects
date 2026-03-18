#include <stdio.h>

int main()
{
  char name[50];
  int grade;

  printf("Enter student name: ");
  scanf("%s", &name);

  printf("Enter grade: ");
  scanf("%d", &grade);

  if (grade >= 90 && grade <= 100)
  {
    printf("Remark: Excellent\n");
  }
  else if (grade >= 80 && grade <= 89)
  {
    printf("Remark: Very Good\n");
  }
  else if (grade >= 70 && grade <= 79)
  {
    printf("Remark: Good\n");
  }
  else if (grade >= 60 && grade <= 69)
  {
    printf("Remark: Passed\n");
  }
  else if (grade < 60 && grade >= 0)
  {
    printf("Remark: Failed\n");
  }

  return 0;
}