/*
 * Convert temperature between Celsius and Fahrenheit
 * (ConvertTemperature.c)
 */
#include <stdio.h>
 
int main() {
   double celsius, fahrenheit;
 
   printf("Enter the temperature in celsius: ");
   scanf("%lf", &celsius);  // Use %lf to read an double
   fahrenheit = celsius * 9.0 / 5.0 + 32.0;
   printf("%.2lf degree C is %.2lf degree F.\n\n", celsius, fahrenheit);
      // %.2lf prints a double with 2 decimal places
 
   printf("Enter the temperature in fahrenheit: ");
   scanf("%lf", &fahrenheit);
   celsius =  (fahrenheit - 32.0) * 5.0 / 9.0;
   printf("%.2lf degree F is %.2lf degree C.\n\n", fahrenheit, celsius);
 
   return 0;
}

/*
Enter the temperature in celsius: 37.2
37.20 degree C is 98.96 degree F.

Enter the temperature in fahrenheit: 100
100.00 degree F is 37.78 degree C.
*/
