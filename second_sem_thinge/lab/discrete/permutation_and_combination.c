// to generate permutations and combinations
#include <stdio.h>
unsigned factorial(int num){
    unsigned fact = 1;
    for(int i = 1; i <= num; i++){
        fact *= i;  
    }
    return fact;
}

void permutation(int n, int r){
    unsigned perm = factorial(n) / factorial(n - r);
    printf("Permutation P(%d, %d) = %u\n", n, r, perm);

}

void combination(int n, int r){
    unsigned comb = factorial(n) / (factorial(r) * factorial(n - r));
    printf("Combination C(%d, %d) = %u\n", n, r, comb);

}
int main(){
    int n, r;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("Enter the value of r: ");
    scanf("%d", &r);

    if(r > n){
        printf("Invalid input: r cannot be greater than n.\n");
        return 1;
    }

    permutation(n, r);
    combination(n, r);

    return 0;

}