#include <stdio.h>
#include <string.h>

#define MAX_SIZE 100

int main() {
    char str[MAX_SIZE];
    int freq[256] = {0}; // Initialize frequency array with all elements as 0
    int max_freq = 0;
    char max_char;

    printf("Enter a string: ");
    fgets(str, MAX_SIZE, stdin);

    for(int i = 0; str[i] != '\0'; i++) {
        if(str[i] != ' ') {
            freq[(int)str[i]]++; // Increment frequency of character at index (int)str[i]
        }
    }

    for(int i = 0; i < 256; i++) {
        if(freq[i] > max_freq) {
            max_freq = freq[i];
            max_char = (char)i;
        }
    }

    printf("The character '%c' has the highest frequency of %d\n", max_char, max_freq);

    return 0;
}
