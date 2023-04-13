#include <stdio.h>
#include <stdbool.h>

bool isPrime(int num);

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    bool found = false;

    for(int i = 2; i <= n/2; i++) {
        if(isPrime(i)) {
            if(isPrime(n - i)) {
                printf("%d can be expressed as the sum of %d and %d\n", n, i, n-i);
                found = true;
            }
        }
    }

    if(!found) {
        printf("%d cannot be expressed as the sum of two prime numbers\n", n);
    }

    return 0;
}

bool isPrime(int num) {
    if(num <= 1) {
        return false;
    }
    for(int i = 2; i * i <= num; i++) {
        if(num % i == 0) {
            return false;
        }
    }
    return true;
}
