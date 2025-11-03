//Write a program to check if a number is an Armstrong number.
#include <stdio.h>
#include <math.h>
int main() {
    int n, original, remainder, digits = 0;
    float result = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    original = n;
    while(original != 0) {
        original /= 10;
        digits++;
    }
    original = n;
    while(original != 0) {
        remainder = original % 10;
        result += pow(remainder, digits);
        original /= 10;
    }
    if((int)result == n)
        printf("Armstrong Number\n");
    else
        printf("Not an Armstrong Number\n");
    return 0;
}
