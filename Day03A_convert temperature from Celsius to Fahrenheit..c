//Write a program to convert temperature from Celsius to Fahrenheit.
#include <stdio.h>

int main() {
    double celsius, fahrenheit;
    
    printf("Enter temperature in Celsius: ");
    scanf("%lf", &celsius);
    fahrenheit = (celsius * 9 / 5) + 32;
    printf("Temperature in Fahrenheit = %.2lf\n", fahrenheit);

    return 0;
}
