/* Test Arithmetic Overflow/Underflow (TestOverflow.c) */
#include <stdio.h>
 
int main() {
   // Range of int is [-2147483648, 2147483647]
   int i1 = 2147483647;      // max int
   printf("%d\n", i1 + 1);   // -2147483648 (overflow)
   printf("%d\n", i1 + 2);   // -2147483647
   printf("%d\n", i1 * i1);  // 1
 
   int i2 = -2147483648;     // min int
   printf("%d\n", i2 - 1);   // 2147483647 (underflow)
   printf("%d\n", i2 - 2);   // 2147483646
   printf("%d\n", i2 * i2);  // 0
   return 0;
}
