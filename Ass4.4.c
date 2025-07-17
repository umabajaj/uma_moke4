#include <stdio.h>

// Function to calculate factorial
int factorial(int num) {
    int fact = 1;
    for(int i = 1; i <= num; i++) {
        fact *= i;
    }
    return fact;
}

// Function to check if a number is strong
int isStrong(int num) {
    int original = num, sum = 0;
    while (num > 0) {
        int digit = num % 10;
        sum += factorial(digit);
        num /= 10;
    }
    return sum == original;
}

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Strong numbers between 1 and %d are:\n", n);
    for (int i = 1; i <= n; i++) {
        if (isStrong(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}
