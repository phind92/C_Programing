/* Test Function (TestFunction.c) */
#include <stdio.h>
const int PI = 3.14159265;
 
// Function Prototype (Function Declaration)
double getArea(double radius);
 
int main() {
   double radius1 = 1.1, area1, area2;
   // call function getArea()
   area1 = getArea(radius1);
   printf("area 1 is %.2lf\n", area1);
   // call function getArea()
   area2 = getArea(2.2);
   printf("area 2 is %.2lf\n", area2);
   // call function getArea()
   printf("area 3 is %.2lf\n", getArea(3.3));
}
 
// Function Definition
// Return the area of a circle given its radius
double getArea(double radius) {
   return radius * radius * PI;
}

/*
area 1 is 3.63
area 2 is 14.52
area 3 is 32.67
*/
