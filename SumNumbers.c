/*
 * Sum from 1 to an upperbound using a while-loop (SumNumbers.c).
 */
#include <stdio.h>
 
int main() {
   int sum = 0;    // Declare an int variable sum to accumulate the numbers
                   // Set the initial sum to 0
   int upperbound; // Sum from 1 to this upperbound
 
   // Prompt user for an upperbound
   printf("Enter the upperbound: ");
   scanf("%d", &upperbound);  // Use %d to read an int
 
   // Use a loop to repeatedly add 1, 2, 3,..., up to upperbound
   int number = 1;
   while (number <= upperbound) {
      sum = sum + number;   // accumulate number into sum
      ++number;             // increment number by 1
   }
   // Print the result
   printf("The sum from 1 to %d is %d.\n", upperbound, sum);
 
   return 0;
}

/*
Enter the upperbound: 1000
The sum from 1 to 1000 is 500500.
*/

/*
Dissecting the Program:

int sum = 0;
==> declares an int variable named sum and initializes it to 0. This variable will be used to accumulate numbers over the steps in the repetitive loop.

printf("Enter the upperbound: ");
scanf("%d", &upperbound);
==> prompt user for an upperbound to sum.
*/
