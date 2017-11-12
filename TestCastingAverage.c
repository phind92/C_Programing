/*
 * Testing type cast (TestCastingAverage.c)
 */
#include <stdio.h>
 
int main() {
   int sum = 0;      // Sum in "int"
   double average;   // average in "double"
 
   // Compute the sum from 1 to 100 (in "int")
   int number = 1;
   while (number <= 100) {
      sum = sum + number;
      ++number;
   }
   printf("The sum is %d.\n", sum);
 
   // Compute the average (in "double")
   average = sum / 100;
   printf("Average 1 is %lf.\n", average);
   average = (double)sum / 100;
   printf("Average 2 is %lf.\n", average);
   average = sum / 100.0;
   printf("Average 3 is %lf.\n", average);
   average = (double)(sum / 100);
   printf("Average 4 is %lf.\n", average);
 
   return 0;
}

/*
The sum is 5050.
Average 1 is 50.000000.  <== incorrect
Average 2 is 50.500000.
Average 3 is 50.500000.
Average 4 is 50.000000.  <== incorrect
*/

/*
The first average is incorrect, as int/int produces an int (of 50).
For the second average, the value of sum (of int) is first converted to double. Subsequently, double/int produces double.
For the third average, int/double produces double.
For the fourth average, int/int produces an int (of 50), which is then casted to double (of 50.0) and assigned to average (of double).
*/
