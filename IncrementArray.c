/* Function to increment each element of an array (IncrementArray.c) */
#include <stdio.h>
 
// Function prototypes
void inc(int array[], int size);
void print(int array[], int size);
 
// Test Driver
int main() {
   int a1[] = {8, 4, 5, 3, 2};
 
   // Before increment
   print(a1, 5);   // {8,4,5,3,2}
   // Do increment
   inc(a1, 5);     // Array is passed by reference (having side effect)
   // After increment
   print(a1, 5);   // {9,5,6,4,3}
}
 
// Function definitions
 
// Increment each element of the given array
void inc(int array[], int size) {  // array[] is not const
   int i;
   for (i = 0; i < size; ++i) {
      array[i]++;  // side-effect
   }
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
