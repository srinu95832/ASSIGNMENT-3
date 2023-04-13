#include <stdio.h>

int gcd(int a, int b);

int main() {
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    int gcd_val = gcd(num1, num2);

    int lcm_val = (num1 * num2) / gcd_val;

    printf("LCM of %d and %d is %d\n", num1, num2, lcm_val);

    return 0;
}

int gcd(int a, int b) {
    if(b == 0) {
        return a;
    }
    else {
        return gcd(b, a % b);
    }
}
