#include <stdio.h>
#include <string.h>

void swap(char *x, char *y) {
   char temp = *x;
   *x = *y;
   *y = temp;
}

void permute(char *str, int start, int end) {
   int i;
   if (start == end) {
      printf("%s\n", str);
   } else {
      for (i = start; i <= end; i++) {
         swap((str + start), (str + i));
         permute(str, start + 1, end);
         swap((str + start), (str + i));
      }
   }
}

int main() {
   char str[100];
   printf("Enter a string: ");
   scanf("%s", str);
   printf("Permutations of the string are: \n");
   int n = strlen(str);
   permute(str, 0, n - 1);
   return 0;
}
