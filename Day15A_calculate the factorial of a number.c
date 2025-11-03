//Write a program to calculate the factorial of a number.
#include <stdio.h>
int main() {
    int n, i = 1;
    unsigned long long fact = 1;
    printf("Enter a number: ");
    scanf("%d", &n);
    while(i <= n) {
        fact *= i;
        i++;
    }
    printf("Factorial of %d is: %llu\n", n, fact);
    return 0;
}
