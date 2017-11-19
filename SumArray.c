/* Function to compute the sum of an array (SumArray.c) */
#include <stdio.h>
 
// Function prototype
int sum(int array[], int size);    // Need to pass the array size too
void print(int array[], int size);
 
// Test Driver
int main() {
   int a1[] = {8, 4, 5, 3, 2};
   print(a1, 5);   // {8,4,5,3,2}
   printf("sum is %d\n", sum(a1, 5));  // sum is 22
}
 
// Function definition
// Return the sum of the given array
int sum(int array[], int size) {
   int sum = 0;
   int i;
   for (i = 0; i < size; ++i) {
      sum += array[i];
   }
   return sum;
}
 
// Print the contents of the given array
void print(int array[], int size) {
   int i;
   printf("{");
   for (i = 0; i < size; ++i) {
      printf("%d", array[i]);
      if (i < size - 1) {
         printf(",");
      }
   }
   printf("}\n");
}
