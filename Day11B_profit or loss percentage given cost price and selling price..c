//Write a program to find profit or loss percentage given cost price and selling price.
#include <stdio.h>
int main() {
    float cost, selling, profit, loss, percent;
    printf("Enter cost price: ");
    scanf("%f", &cost);
    printf("Enter selling price: ");
    scanf("%f", &selling);
    if(selling > cost) {
        profit = selling - cost;
        percent = (profit / cost) * 100;
        printf("Profit = %.2f%%\n", percent);
    } else if(cost > selling) {
        loss = cost - selling;
        percent = (loss / cost) * 100;
        printf("Loss = %.2f%%\n", percent);
    } else
        printf("No Profit, No Loss\n");
    return 0;
}
