// to imlement  the ceiling and floor functions
#include<stdio.h>
#include<math.h>
int main(){
    float num;
    printf("Enter the number for which you want to find ceiling and floor: ");
    scanf("%f", &num);
    printf("Ceiling of %f is: %f\n", num, ceil(num));
    printf("Floor of %f is: %f\n", num, floor(num));

    return 0;
}