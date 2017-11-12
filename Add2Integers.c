/*
 * Add two integers and print their sum (Add2Integers.c)
 */
#include <stdio.h>
 
int main() {
   int integer1; // Declare a variable named integer1 of the type integer
   int integer2; // Declare a variable named integer2 of the type integer
   int sum;      // Declare a variable named sum of the type integer
 
   integer1 = 55;   // Assign value to variable integer1
   integer2 = 66;   // Assign value to variable integer1
   sum = integer1 + integer2;   // Compute the sum
 
   // Print the result
   printf("The sum of %d and %d is %d.\n", integer1, integer2, sum);
 
   return 0;
}

/*
The sum of 55 and 66 is 121.
*/
