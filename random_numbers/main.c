#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Description:
// This program generates three random numbers between 1 and 6 (inclusive) using the rand() function
// from the <stdlib.h> library. It seeds the random number generator using the current time to
// ensure different random numbers each time the program is executed. The generated numbers are then
// printed to the console using printf().

int main()
{
  srand(time(0)); // Seed the random number generator with the current time

  int number1 = (rand() % 6) + 1; // Generate random number between 1 and 6
  int number2 = (rand() % 6) + 1; // Generate random number between 1 and 6
  int number3 = (rand() % 6) + 1; // Generate random number between 1 and 6

  printf("%d\n", number1); // Print the first random number
  printf("%d\n", number2); // Print the second random number
  printf("%d\n", number3); // Print the third random number

  return 0;
}
