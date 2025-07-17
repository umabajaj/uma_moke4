#include <stdio.h>
int power(int base, int exponent) {
    int result = 1;
    for(int i = 1; i <= exponent; i++) {
        result = result * base;
    }
    return result;
}
int main() {
    int base, exponent, result;
    printf("Enter base: ");
    scanf("%d", &base);
    printf("Enter exponent: ");
    scanf("%d", &exponent);
    result = power(base, exponent);
    printf("%d^%d = %d\n", base, exponent, result);
    return 0;
}