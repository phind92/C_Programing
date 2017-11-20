/*
 * TestScanf.c
 */
#include <stdio.h>
 
int main() {
   int anInt;
   float aFloat;
   double aDouble;
 
   printf("Enter an int: ");  // Prompting message
   scanf("%d", &anInt);       // Read an int from keyboard and assign to variable anInt.
   printf("The value entered is %d.\n", anInt);
 
   printf("Enter a floating-point number: ");  // Prompting message
   scanf("%f", &aFloat);     // Read a double from keyboard and assign to variable aFloat.
   printf("The value entered is %f.\n", aFloat);
 
   printf("Enter a floating-point number: ");  // Prompting message
   scanf("%lf", &aDouble);     // Read a double from keyboard and assign to variable aDouble.
   printf("The value entered is %lf.\n", aDouble);
 
   return 0;
}
