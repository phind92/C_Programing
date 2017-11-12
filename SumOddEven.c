/*
 * Sum the odd and even numbers from 1 to an upperbound (SumOddEven.c)
 */
#include <stdio.h>
 
int main() {
   int sumOdd  = 0; // For accumulating odd numbers, init to 0
   int sumEven = 0; // For accumulating even numbers, init to 0
   int upperbound;  // Sum from 1 to this upperbound
 
   // Prompt user for an upperbound
   printf("Enter the upperbound: ");
   scanf("%d", &upperbound);   // Use %d to read an int
 
   // Use a loop to repeatedly add 1, 2, 3,..., up to upperbound
   int number = 1;
   while (number <= upperbound) {
      if (number % 2 == 0) {  // even number
         sumEven = sumEven + number;
      } else {                // odd number
         sumOdd = sumOdd + number;
      }
      ++number; // increment number by 1
   }
 
   // Print the results
   printf("The sum of odd numbers is %d.\n", sumOdd);
   printf("The sum of even numbers is %d.\n", sumEven);
   printf("The difference is %d.\n", (sumOdd - sumEven));
 
   return 0;
}

/*
Enter the upperbound: 10000
The sum of odd numbers is 25000000.
The sum of even numbers is 25005000.
The difference is -5000.
*/

