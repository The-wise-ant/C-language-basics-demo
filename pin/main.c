#include <stdio.h>

/*
This program simulates a basic PIN (Personal Identification Number) authentication system. 
It prompts the user to input a 4-digit PIN number. 
If the entered PIN does not match the predefined PIN (1234 in this case), 
it displays a message indicating that the PIN is incorrect and prompts the user to retry. 
This process continues until the correct PIN is entered. Once the correct PIN is entered, 
it displays a welcome message and terminates.
*/

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