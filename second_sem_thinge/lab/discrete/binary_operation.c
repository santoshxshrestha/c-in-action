// to implement binary addition , multiplication and division
#include <stdio.h>
int main(){
    int a, b, sum, product, quotient;
    printf("Enter first binary number: ");
    scanf("%d", &a);
    printf("Enter second binary number: ");
    scanf("%d", &b);

    // convert binary to decimal
    int decimal_a = 0, decimal_b = 0, base = 1;
    while (a > 0) {
        decimal_a += (a % 10) * base;
        a /= 10;
        base *= 2;
    }


    return 0;
}