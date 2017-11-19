/* Fundamental types are passed by value into Function (TestPassByValue.c) */
#include <stdio.h>
 
// Function prototypes
int inc(int number);
 
// Test Driver
int main() {
   int n = 8;
   printf("Before calling function, n is %d\n", n); // 8
   int result = inc(n);
   printf("After calling function, n is %d\n", n);  // 8
   printf("result is %d\n", result);                // 9
}
 
// Function definitions
// Return number+1
int inc(int number) {
   ++number;  // Modify parameter, no effect to caller
   return number;
}
