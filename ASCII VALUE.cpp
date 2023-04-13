#include <stdio.h>
#include <string.h>

int main() {
   char str[100];
   int sum = 0, i;

   printf("Enter a string: ");
   gets(str);

   for (i = 0; str[i] != '\0'; i++) {
      sum += str[i];
   }

   printf("Sum of ASCII values of all characters in the string: %d", sum);

   return 0;
}
