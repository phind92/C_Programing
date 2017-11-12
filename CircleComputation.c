/*
 * Prompt user for the radius of a circle and compute its area and circumference
 * (CircleComputation.c)
 */
#include <stdio.h>
 
int main() {
   double radius, circumference, area; // Declare 3 floating-point variables
   double pi = 3.14159265;             // Declare and define PI
 
   printf("Enter the radius: ");  // Prompting message
   scanf("%lf", &radius);         // Read input into variable radius
 
   // Compute area and circumference
   area = radius * radius * pi;
   circumference = 2.0 * radius * pi;
 
   // Print the results
   printf("The radius is %lf.\n", radius);
   printf("The area is %lf.\n", area);
   printf("The circumference is %lf.\n", circumference);
 
   return 0;
}

/*
Enter the radius: 1.2
The radius is 1.200000.
The area is 4.523893.
The circumference is 7.539822.
*/

/*
Dissecting the Program

double radius, circumference, area;
double pi = 3.14159265;
==> We declare three double variables called radius, circumference and area. A double variable, unlike int, can hold real number (or floating-point number) such as 1.23 or 4.5e6. We also declare a double variable called pi and initialize its value to 3.1416.

printf("Enter the radius: ");
scanf("%lf", &radius);
==> We use print() to put up a prompt message, and scanf() to read the user input into variable radius. Take note that the %lf conversion specifier for double (lf stands for long float). Also remember to place an ampersand (&) before radius.

area = radius * radius * pi;
circumference = 2.0 * radius * pi;
==> perform the computation.

printf("The radius is %lf.\n", radius);
printf("The area is %lf.\n", area);
printf("The circumference is %lf.\n", circumference);
==> Again, we use %lf conversion specifier to print a double.
*/
