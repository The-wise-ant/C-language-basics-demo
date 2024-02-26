#include <stdio.h>

int main()
{

  int pin = 1234;
  int inputNum;

  do
  {
    printf("insert your 4 digit pin number\n");
    scanf("%d", &inputNum);
    if (inputNum != pin)
    {
      printf("pin not correct, please retry\n");
    }
  } while (inputNum != pin);

  printf("pin correct, welcome\n");

  return 0;
}