#include <stdio.h>
/*
This program demonstrates swapping the values of two characters without using arrays.
 It initializes two character variables, x and y, with the characters 'X' and 'Y' respectively. 
 It then creates a temporary character variable, temp, to hold the value of variable x temporarily. 
 It swaps the values of x and y by assigning the value of y to x and the value of temp (which is the original value of x)
  to y. Finally, it prints the values of x and y to confirm the swap.
*/


int main()
{

  char x = 'X';
  char y = 'Y';

  char temp;

  temp = x;

  x = y;
  y = temp;

  printf("x = %c\n", x);
  printf("y = %c\n", y);

  return 0;
}