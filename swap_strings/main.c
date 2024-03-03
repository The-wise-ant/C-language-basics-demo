#include <stdio.h>
#include <string.h>
/*
This program demonstrates swapping the contents of two character arrays using the strcpy function 
from the string.h library. It initializes two character arrays, x and y, with the strings "water" and "lemonade" 
respectively. It then creates a temporary character array, temp, to hold the contents of array x temporarily.
 Using the strcpy function, it copies the contents of array y into array x,
  and then copies the contents of the temporary array temp into array y, 
  effectively swapping the contents of the two arrays. 
  Finally, it prints the contents of arrays x and y to confirm the swap.
*/


int main()
{

  char x[15] = "water";
  char y[15] = "lemonade";

  char temp[15];

  strcpy(temp, x);
  strcpy(x, y);

  /*
   if the length of the destina array is less than that of the source it can lead to unexpected behaviour.
   A solution to this is to make all arrays the same length, in our case 15.
  */
  strcpy(y, temp);

  printf("x = %s\n", x);
  printf("y = %s\n", y);

  return 0;
}