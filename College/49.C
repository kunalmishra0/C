// GCD and LCM of 2 numbers using recursion
#include <stdio.h>

int gcd(int a, int b);
int lcm(int a, int b);

int main() {
    int a, b;

    printf("Enter value for 1st number: ");
    scanf("%d", &a);

    printf("Enter value for 2nd number: ");
    scanf("%d", &b);

    printf(" GCD of %d and %d is %d\n", a, b, gcd(a, b));
    printf(" LCM of %d and %d is %d\n", a, b, lcm(a, b));

    return 0;
}

// Recursive function to calculate GCD
int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

// Function to calculate LCM using GCD
int lcm(int a, int b) {
    return (a / gcd(a, b)) * b;  // Divide first to avoid overflow
}
