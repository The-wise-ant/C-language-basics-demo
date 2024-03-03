#include <stdio.h>
#include <ctype.h>

/*
This program acts as a basic calculator that allows users to perform arithmetic operations (+, -, *, /)
 on two numbers. It prompts the user to enter an operator and two numbers. 
 It then calculates the result based on the operator entered and displays it. 
 If the user attempts to divide by zero, it informs them of the error. 
 If an invalid operator is entered, it notifies the user accordingly. 
 The program utilizes a switch statement to determine the operation to be performed.
*/



int main()
{

  char operator;
  double num1;
  double num2;
  double result;

  printf("Enter operator: (- + * /):\n");
  scanf("%c", &operator);

  printf(" Enter number1:\n");
  scanf("%lf", &num1);

  printf(" Enter number2:\n");
  scanf("%lf", &num2);

  switch (operator)
  {
  case '-':
    result = num1 - num2;
    printf("result is: %.2lf", result);

    break;
  case '+':
    result = num1 + num2;
    printf("result is: %.2lf", result);

    break;
  case '*':
    result = num1 * num2;
    printf("result is: %.2lf", result);

    break;
  case '/':
    result = num1 / num2;
    printf("result is: %.2lf", result);
    break;

  default:
    printf("%c is no valid operation", operator);
    break;
  }

  return 0;
}