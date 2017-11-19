/*
 *  Find the mean and standard deviation of numbers kept in an array (MeanStdArray.c).
 */
#include <stdio.h>
#include <math.h>
#define SIZE 7
 
int main() {
   int marks[] = {74, 43, 58, 60, 90, 64, 70};
   int sum = 0;
   int sumSq = 0;
   double mean, stdDev;
   int i;
   for (i = 0; i < SIZE; ++i) {
      sum += marks[i];
      sumSq += marks[i] * marks[i];
   }
   mean = (double)sum/SIZE;
   printf("Mean is %.2lf\n", mean);
 
   stdDev = sqrt((double)sumSq/SIZE - mean*mean);
   printf("Std dev is %.2lf\n", stdDev);
 
   return 0;
}
