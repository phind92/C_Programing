/* Testing max function (TestMaxFunction.c) */
#include <stdio.h>
 
int maximum(int, int); // Function prototype (declaration)
 
int main() {
   printf("%d\n", maximum(5, 8));  // Call maximum() with literals
 
   int a = 6, b = 9, c;
   c = maximum(a, b);              // Call maximum() with variables
   printf("%d\n", c);
 
   printf("%d\n", maximum(c, 99)); // Call maximum()
}
 
// Function definition
// A function that returns the maximum of two given int
int maximum(int num1, int num2) {
   return (num1 > num2) ? num1 : num2;
}
