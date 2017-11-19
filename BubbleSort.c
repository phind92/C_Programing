/* Sorting an array using Bubble Sort (BubbleSort.c) */
#include <stdio.h>
 
void bubbleSort(int a[], int size);
void print(const int a[], int size);
 
int main() {
   const int SIZE = 8;
   int a[] = {8, 4, 5, 3, 2, 9, 4, 1};
 
   print(a, SIZE);
   printf("\n");
   bubbleSort(a, SIZE);
   print(a, SIZE);
   printf("\n");
}
 
// Sort the given array of size
void bubbleSort(int a[], int size) {
   int done = 0; // terminate if no more swap thru a pass
   int pass = 0;      // pass number, for tracing
   int temp;          // use for swapping
 
   while (!done) {
      printf("PASS %d...\n", ++pass);   // for tracing
      done = 1;
      // Pass thru the list, compare adjacent items and swap
      // them if they are in wrong order
      int i;
      for (i = 0; i < size - 1; ++i) {
         if (a[i] > a[i+1]) {
            print(a, size); // for tracing
            temp = a[i];
            a[i] = a[i+1];
            a[i+1] = temp;
            done = 0;   // swap detected, one more pass
            printf("=> ");  // for tracing
            print(a, size);
            printf("\n");
         }
      }
   }
}
 
// Print the contents of the given array of size
void print(const int a[], int size) {
   int i;
   printf("{");
   for (i = 0; i < size; ++i) {
      printf("%d", a[i]);
      if (i < size - 1) printf(",");
   }
   printf("} ");
}
