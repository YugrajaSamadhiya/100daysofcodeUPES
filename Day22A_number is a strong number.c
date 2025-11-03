//Write a program to check if a number is a strong number.
#include <stdio.h>
int main() {
    int n, original, remainder, i, fact, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    original = n;
    while(n != 0) {
        remainder = n % 10;
        fact = 1;
        for(i = 1; i <= remainder; i++)
            fact *= i;
        sum += fact;
        n /= 10;
    }
    if(sum == original)
        printf("Strong Number\n");
    else
        printf("Not a Strong Number\n");
    return 0;
}
