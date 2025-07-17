#include <stdio.h>
#include <stdlib.h>

// Function to check even or odd
void checkEvenOdd(int num) {
    if (num % 2 == 0)
        printf("%d is Even.\n", num);
    else
        printf("%d is Odd.\n", num);
}

// Function to check prime
void checkPrime(int num) {
    if (num <= 1) {
        printf("%d is NOT a Prime number.\n", num);
        return;
    }
    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            printf("%d is NOT a Prime number.\n", num);
            return;
        }
    }
    printf("%d is a Prime number.\n", num);
}

// Function to check positive, negative, or zero
void checkSign(int num) {
    if (num > 0)
        printf("%d is Positive.\n", num);
    else if (num < 0)
        printf("%d is Negative.\n", num);
    else
        printf("Number is Zero.\n");
}

// Function to check palindrome
void checkPalindrome(int num) {
    int original = num, reversed = 0;

    // Make sure it works for negative numbers as well
    if (num < 0) {
        printf("%d is NOT a Palindrome (negative number).\n", num);
        return;
    }

    while (num != 0) {
        int digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }

    if (original == reversed)
        printf("%d is a Palindrome.\n", original);
    else
        printf("%d is NOT a Palindrome.\n", original);
}

// Function to reverse the number
void reverseNumber(int num) {
    int reversed = 0;
    int original = num;
    while (num != 0) {
        int digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }
    printf("Reverse of %d is %d\n", original, reversed);
}

// Function to find sum of digits
void sumOfDigits(int num) {
    int sum = 0;
    int temp = abs(num); // to handle negative numbers
    while (temp != 0) {
        sum += temp % 10;
        temp /= 10;
    }
    printf("Sum of digits of %d is %d\n", num, sum);
}

int main() {
    int num, choice;

    printf("Enter a number: ");
    scanf("%d", &num);

    do {
        printf("\n---- MENU ----\n");
        printf("1. Check Even or Odd\n");
        printf("2. Check Prime or Not\n");
        printf("3. Check Positive, Negative or Zero\n");
        printf("4. Check Palindrome\n");
        printf("5. Reverse the Number\n");
        printf("6. Sum of Digits\n");
        printf("7. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                checkEvenOdd(num);
                break;
            case 2:
                checkPrime(num);
                break;
            case 3:
                checkSign(num);
                break;
            case 4:
                checkPalindrome(num);
                break;
            case 5:
                reverseNumber(num);
                break;
            case 6:
                sumOfDigits(num);
                break;
            case 7:
                printf("Exiting the program.\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }

    } while (choice != 7);

    return 0;
}