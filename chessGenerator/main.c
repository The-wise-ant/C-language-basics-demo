#include <stdio.h>

/*
This program generates a simplified chessboard layout consisting of columns labeled from A to D
and rows numbered from 1 to 5. It utilizes nested loops to iterate over each column and row,
printing the combination of column and row coordinates for each square on the chessboard.
After printing each row, it moves to the next column until all columns are traversed.
The output resembles a portion of a chessboard with 4 columns and 5 rows.
*/

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