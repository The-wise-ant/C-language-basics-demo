#include <stdio.h>
#include <math.h>
/*
This program calculates the circumference and area of a circle based on the given radius. 
It prompts the user to enter the radius of the circle, reads the input, 
and then computes the circumference and area using the formulas: 
circumference = 2 * π * radius and area = π * radius^2, where π is the mathematical constant 
approximately equal to 3.14159. It then prints the calculated values of circumference and area with four decimal places.
*/

int main()
{


const double PI = 3.14159;
double radius;
double circumference;
double area; 

printf("Enter radius of a circle \n");
fscanf(stdin, "%lf", &radius);

circumference = 2 * PI * radius;
area = PI * radius * radius;

printf("circumference is: %.4lf \n", circumference);
printf("area is: %.4lf \n", area);





return 0;

}