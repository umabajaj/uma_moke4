#include <stdio.h>
void printFactors(int num) {
    printf("Factors of %d are: ", num);
    for (int i = 1; i <= num; i++) {
        if (num % i == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");
}
int main() {
    int start, end;
    printf("Enter starting number of range: ");
    scanf("%d", &start);
    printf("Enter ending number of range: ");
    scanf("%d", &end);
    for (int i = start; i <= end; i++) {
        printFactors(i);
    }
    return 0;
}