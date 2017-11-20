#include <stdio.h>
#include <string.h>
 
int main() {
   char message[256];
      // The length of char array shall be sufficient to hold the string
      // plus the terminating null character '\0'
   printf("Enter a message: ");
   scanf("%s", message);
      // Do not place an & before the array variable
   printf("The message is: %s\n", message);
      // Print up to but not including the terminating null character '\0'
 
   // print each characters
   int i;
   for (i = 0; message[i] != '\0'; ++i) {
      printf("'%c' ", message[i]);
   }
   printf("\n");
 
   int len = strlen(message);
      // Length of string does not include terminating null character '\0'
   printf("The length of string is %d\n", len);
}

/*
Enter a message: hello
The message is: hello
'h' 'e' 'l' 'l' 'o'
The length of string is 5
*/
