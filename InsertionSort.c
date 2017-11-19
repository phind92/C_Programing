/* Sorting an array using Insertion Sort (InsertionSort.c) */
#include <stdio.h>
 
void insertionSort(int a[], int size);
void print(const int a[], int iMin, int iMax);
 
int main() {
   const int SIZE = 8;
   int a[] = {8, 4, 5, 3, 2, 9, 4, 1};
 
   print(a, 0, SIZE - 1);
   printf("\n");
   insertionSort(a, SIZE);
   print(a, 0, SIZE - 1);
   printf("\n");
}
 
// Sort the given array of size using insertion sort
void insertionSort(int a[], int size) {
   int temp;   // for shifting elements
   int i, prev, shift;
   for (i = 1; i < size; ++i) {
      // for tracing
      print(a, 0, i - 1);    // already sorted
      print(a, i, size - 1); // to be sorted
      printf("\n");
 
      // For element at i, insert into proper position in [0, i-1]
      //  which is already sorted.
      // Shift down the other elements
      for (prev = 0; prev < i; ++prev) {
         if (a[i] < a[prev]) {
            // insert a[i] at prev, shift the elements down
            temp = a[i];
            for (shift = i; shift > prev; --shift) {
               a[shift] = a[shift-1];
            }
            a[prev] = temp;
            break;
         }
      }
   }
}
 
// Print the contents of the array in [iMin, iMax]
void print(const int a[], int iMin, int iMax) {
   int i;
   printf("{");
   for (i = iMin; i <= iMax; ++i) {
      printf("%d" ,a[i]);
      if (i < iMax) printf(",");
   }
   printf("} ");
}
