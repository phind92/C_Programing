/* Sorting an array using Selection Sort (SelectionSort.c) */
#include <stdio.h>
 
void selectionSort(int a[], int size);
void print(const int a[], int iMin, int iMax);
 
int main() {
   const int SIZE = 8;
   int a[] = {8, 4, 5, 3, 2, 9, 4, 1};
 
   print(a, 0, SIZE - 1);
   printf("\n");
   selectionSort(a, SIZE);
   print(a, 0, SIZE - 1);
   printf("\n");
}
 
// Sort the given array of size using selection sort
void selectionSort(int a[], int size) {
   int temp; // for swapping
   int i, j;
   for (i = 0; i < size - 1; ++i) {
      // for tracing
      print(a, 0, i - 1);
      print(a, i, size - 1);
 
      // [0, i-1] already sort
      // Search for the smallest element in [i, size-1]
      //  and swap with a[i]
      int minIndex = i;  // assume fist element is the smallest
      for (j = i + 1; j < size; ++j) {
         if (a[j] < a[minIndex]) minIndex = j;
      }
      if (minIndex != i) {  // swap
         temp = a[i];
         a[i] = a[minIndex];
         a[minIndex] = temp;
      }
 
      // for tracing
      printf("=> ");
      print(a, 0, i - 1);
      print(a, i, size - 1);
      printf("\n");
   }
}
 
// Print the contents of the array in [iMin, iMax]
void print(const int a[], int iMin, int iMax) {
   int i;
   printf("{");
   for (i = iMin; i <= iMax; ++i) {
      printf("%d", a[i]);
      if (i < iMax) printf(",");
   }
   printf("} ");
}
