/* Test local array initialization (TestArrayInit.c) */
#include <stdio.h>
#define SIZE 5
 
int main() {
   int i;
 
   int a1[SIZE];   // Uninitialized
   for (i = 0; i < SIZE; ++i) printf("%d ", a1[i]);
   printf("\n");   // ? ? ? ? ?
 
   int a2[SIZE] = {21, 22, 23, 24, 25}; // All elements initialized
   for (i = 0; i < SIZE; ++i) printf("%d ", a2[i]);
   printf("\n");   // 21 22 23 24 25
 
   int a3[] = {31, 32, 33, 34, 35};   // Size deduced from init values
   int a3Size = sizeof(a3)/sizeof(int);
   printf("Size is %d\n", a3Size);   // 5
   for (i = 0; i < a3Size; ++i) printf("%d ", a3[i]);
   printf("\n");   // 31 32 33 34 35
 
   int a4[5] = {41, 42};  // Leading elements initialized, the rests to 0
   for (i = 0; i < SIZE; ++i) printf("%d ", a4[i]);
   printf("\n");   // 41 42 0 0 0
 
   int a5[5] = {0};  // First elements to 0, the rests to 0 too
   for (i = 0; i < SIZE; ++i) printf("%d ", a5[i]);
   printf("\n");   // 0 0 0 0 0
 
   int a6[5] = {};   // All elements to 0 too
   for (i = 0; i < SIZE; ++i) printf("%d ", a6[i]);
   printf("\n");   // 0 0 0 0 0
 
   // Using variable as the length of array
   const int SIZE_2 = 5;
   int a7[SIZE_2];  // okay without initialization
   int a8[SIZE_2] = {5, 4, 3, 2, 1}; // error: variable-sized object may not be initialized
}
