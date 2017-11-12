/*
 * Prompt user for two integers and print their sum (PromptAdd2Integers.c)
 */
#include <stdio.h>
 
int main() {
   int integer1, integer2, sum;  // Declare 3 integer variables
 
   printf("Enter first integer: ");   // Display a prompting message
   scanf("%d", &integer1);            // Read input from keyboard into integer1
   printf("Enter second integer: ");  // Display a prompting message
   scanf("%d", &integer2);            // Read input into integer2
 
   sum = integer1 + integer2;         // Compute the sum
 
   // Print the result
   printf("The sum of %d and %d is %d.\n", integer1, integer2, sum);
 
   return 0;
}

/*
Enter first integer: 55
Enter second integer: 66
The sum of 55 and 66 is 121.
*/

/*
Reading Multiple Integers
You can read multiple items in one scanf() statement as follows:
printf("Enter two integers: ");      // Display a prompting message
scanf("%d%d", &integer1, &integer2); // Read two integers
*/
