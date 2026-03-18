#include <stdio.h>
#include <string.h>

int main()
{
  char password[20];
  char correctPassword[] = "1234";
  int attempts = 0;
  int maxAttempts = 3;
  int authenticated = 0;

  while (attempts < maxAttempts)
  {
    printf("Enter password: ");
    scanf("%s", password);

    if (strcmp(password, correctPassword) == 0)
    {
      printf("Access Granted\n");
      authenticated = 1;
      break;
    }
    else
    {
      printf("Incorrect password\n\n");
      attempts++;
    }
  }

  if (!authenticated)
  {
    printf("Access Denied. Too many failed attempts.\n");
  }

  return 0;
}