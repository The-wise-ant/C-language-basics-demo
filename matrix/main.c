#include <stdio.h>

/*
This program initializes a 3x3 matrix and prints its elements row by row. 
The matrix is defined as a two-dimensional array with 3 rows and 3 columns. 
It then calculates the number of rows and columns in the matrix using the sizeof operator. 
The nested loops iterate over each element of the matrix and print its value. 
The outer loop iterates over the rows, and the inner loop iterates over the columns.
 After printing all elements, the program returns 0.
*/


int main(){

  int matrix[3][3] = {{10, 20, 30}, {40, 50, 60}, {70, 80, 90}};
  int rows = sizeof(matrix) / sizeof(matrix[0]);          // Number of rows in the matrix
  int columns = sizeof(matrix[0]) / sizeof(matrix[0][0]); // Number of columns in the matrix

  sizeof(matrix[0]);

  for (int row = 0; row < rows; row++)
  {

    for (int column = 0; column < columns; column++)
    {

      printf("%d\n", matrix[row][column]);
    }
  }


  return 0;
}