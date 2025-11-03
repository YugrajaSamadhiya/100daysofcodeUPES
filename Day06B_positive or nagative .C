//Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.
#include <stdio.h>

int main() {
    int num;

    // Input an integer
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Nested if–else for even/odd check
    if (num >= 0) {
        if (num % 2 == 0) {
            printf("%d is Even.\n", num);
        } else {
            printf("%d is Odd.\n", num);
        }
    } else {
        // Negative numbers also can be even or odd
        if (num % 2 == 0) {
            printf("%d is Even.\n", num);
        } else {
            printf("%d is Odd.\n", num);
        }
    }

    return 0;
}
