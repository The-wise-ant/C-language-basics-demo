#include <stdio.h>
#include <math.h>

/*
This program calculates the length of the hypotenuse (side C) 
of a right triangle given the lengths of the other two sides (A and B). 
It prompts the user to enter the lengths of sides A and B, reads the inputs, 
and then calculates the length of side C using the Pythagorean theorem: C = sqrt(A^2 + B^2). 
It then prints the calculated length of side C with two decimal places.
*/


int main()
{


double A;
double B;
double C;
printf("Enter side A:\n");
scanf("%lf", &A);
printf("Enter side B:\n");

scanf("%lf", &B);

C = sqrt(A*A + B*B);

printf("side c: %.2lf", C);





return 0;

}