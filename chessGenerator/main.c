#include <stdio.h>

int main()
{

  char column;
  int row;

  for (column = 'A'; column <= 'D'; column++)
  {
    for (row = 1; row <= 5; row++)
    {
      printf(" %c%d ", column, row);
      if (row == 5)
      {
        printf("\n");
      }
    }
  }

  return 0;
}