#include <stdio.h>
#include <string.h>

void reverseString(char *);

int main() {
    char string[100];

    printf("Enter a string: ");
    scanf("%s", string);

    reverseString(string);

    printf("Reversed string: %s\n", string);

    return 0;
}

void reverseString(char *str) {
    int length = strlen(str);

    char *start = str;
    char *end = str + length - 1;

    while (start < end) {
        char temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
}
