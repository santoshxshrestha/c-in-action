// to implement euclidean and extended euclidean algorithm
#include <stdio.h>
void euclideanAlgorithm(int a, int b) {
    while (b != 0) {
        int q = a / b;
        int r = a % b;
        a = b;
        b = r;
    }
    printf("The GCD by Euclidean algorithm is: %d\n", a);
}

void extendedEuclideanAlgorithm(int a, int b) {
    int original_a = a, original_b = b;
    int s1 = 1, s2 = 0, t1 = 0, t2 = 1;
    int q, r, s, t;

    while (b != 0) {
        q = a / b;
        r = a % b;
        s = s1 - q * s2;
        t = t1 - q * t2;

        a = b;
        b = r;
        s1 = s2;
        s2 = s;
        t1 = t2;
        t2 = t;
    }

    int gcd = a;
    printf("The GCD by Extended Euclidean algorithm is: %d\n", gcd);
    printf("Coefficients: %d, %d\n", s1, t1);
    printf("Linear combination: %d * %d + %d * %d = %d\n", s1, original_a, t1, original_b, gcd);
}

int main() {
    int a, b;
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);

    euclideanAlgorithm(a, b);
    extendedEuclideanAlgorithm(a, b);

    return 0;
}
