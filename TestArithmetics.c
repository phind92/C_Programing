/*
 * Test arithmetic operations (TestArithmetics.c)
 */
#include <stdio.h>
 
int main() {
 
   int number1, number2;  // Declare 2 integer variable number1 and number2
   int sum, difference, product, quotient, remainder;  // declare 5 int variables
 
   // Prompt user for the two numbers
   printf("Enter two integers (separated by space): ");
   scanf("%d%d", &number1, &number2);  // Use 2 %d to read 2 integers
 
   // Do arithmetic Operations
   sum = number1 + number2;
   difference = number1 - number2;
   product = number1 * number2;
   quotient = number1 / number2;
   remainder = number1 % number2;
 
   printf("The sum, difference, product, quotient and remainder of %d and %d are %d, %d, %d, %d, %d.\n",
        number1, number2, sum, difference, product, quotient, remainder);
 
   // Increment and Decrement
   ++number1;    // Increment the value stored in variable number1 by 1
                 // same as "number1 = number1 + 1"
   --number2;    // Decrement the value stored in variable number2 by 1
                 // same as "number2 = number2 - 1"
   printf("number1 after increment is %d.\n", number1);
   printf("number2 after decrement is %d.\n", number2);
 
   quotient = number1 / number2;
   printf("The new quotient of %d and %d is %d.\n", number1, number2, quotient);
 
   return 0;
}

/*
Enter two integers (separated by space): 98 5
The sum, difference, product, quotient and remainder of 98 and 5 are 103, 93, 49
0, 19, 3.
number1 after increment is 99.
number2 after decrement is 4.
The new quotient of 99 and 4 is 24.
*/

/*
Dissecting the Program:

int number1, number2;
int sum, difference, product, quotient, remainder;
==> declare all the int (integer) variables number1, number2, sum, difference, product, quotient, and remainder, needed in this program.

printf("Enter two integers (separated by space): ");
scanf("%d%d", &number1, &number2);
==> prompt user for two integers and store into number1 and number2, respectively.

sum = number1 + number2;
difference = number1 - number2;
product = number1 * number2;
quotient = number1 / number2;
remainder = number1 % number2;
==> carry out the arithmetic operations on number1 and number2. Take note that division of two integers produces a truncated integer, e.g., 98/5 → 19, 99/4 → 24, and 1/2 → 0.

printf("The sum, difference, product, quotient and remainder of %d and %d are %d, %d, %d, %d, %d.\n",
   number1, number2, sum, difference, product, quotient, remainder);
==> prints the results of the arithmetic operations, with the appropriate string descriptions in between.

++number1;
--number2;
==> illustrate the increment and decrement operations. Unlike '+', '-', '*', '/' and '%', which work on two operands (binary operators), '++' and '--' operate on only one operand (unary operators). ++x is equivalent to x = x + 1, i.e., increment x by 1. You may place the increment operator before or after the operand, i.e., ++x (pre-increment) or x++ (post-increment). In this example, the effects of pre-increment and post-increment are the same. I shall point out the differences in later section.
*/
