#include <stdio.h>


/*
This program prompts the user to input a number and then counts from 0 up to that number, 
determining whether each number is even or odd (uneven). 
It utilizes a for loop to iterate through each number from 0 to the input number. 
Inside the loop, it checks if each number is even or odd using the modulo operator (%). 
If the remainder of dividing the number by 2 is 0, it's considered even; otherwise, it's considered odd. 
The program then prints a message indicating whether each number is even or odd.
*/

int main()
{

  int num;

  printf("Insert a number. The program will count to that number and tell\n which number is even and which uneven\n");
  scanf("%d", &num);

  for (int i = 0; i <=num; i++)
  {

    if (i % 2 == 0)
    {
      printf("%d is even\n", i);
    }
    if (i % 2 != 0)
    {
      printf("%d is uneven\n", i);
    }
  }

  return 0;
}