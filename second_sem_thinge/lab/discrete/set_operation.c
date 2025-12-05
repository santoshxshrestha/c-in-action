// program to implement set operation union, intersection, difference and 
// cartesian product
#include<stdio.h>
int contains(int arr[], int size, int element){
    for (int i = 0; i<size; i++){
        if (arr[i] == element){
            return 1; 
        }
    }
    return 0;
}

void uniosSet(int A[], int n, int B[], int m){
    printf("Union of Set A and Set B: ");
    for(int i = 0; i<n; i++){
        printf("%d ", A[i]);
    }
    for (int i = 0 ; i<m ; i++ ){
        if(!contains(A, n, B[i])){
            printf("%d ", B[i]);
        }
    }
}

void interSection(int A[], int n, int B[], int m){
    printf("\nIntersection of Set A and Set B: ");
    for(int i = 0; i<n; i++){
        if(contains(B, m, A[i])){
            printf("%d ", A[i]);
        }
    }
}

void difference(int A[], int n, int B[], int m){
    printf("\nDifference of Set A and Set B: ");
    printf("\n A - B:");
    for(int i = 0; i<n; i++){
        if(!contains(B, m, A[i])){
            printf("%d", A[i]);
        }
    }
    printf("\n B - A:");
    for (int i = 0; i<m; i++){
        if(!contains(A, n, B[i])){
            printf("%d ", B[i]);
        }
    }

}

void cartesianProduct(int A[], int n, int B[], int m){
    printf("\nCartesian Product of set A and set B:");
    for(int i = 0; i<n; i++){
        for(int j=0 ; j<m;j++){
            printf("(%d, %d), ", A[i], B[j]);
        }
    }
}

int main(){
    int A[100], B[100], n,m;
    printf("Enter the size of Set A: ");
    scanf("%d", &n);
    for (int i = 0 ; i< n; i++) {
        printf("Enter element %d of Set A: ", i + 1);
        scanf("%d", &A[i]);
    };

    printf("Enter the size of Set B: ");
    scanf("%d", &m);
    for (int i = 0 ; i< m; i++) {
        printf("Enter element %d of Set B: ", i + 1);
        scanf("%d", &B[i]);
    };

    uniosSet(A, n, B, m);
    interSection(A, n, B, m);
    difference(A, n, B, m);
    cartesianProduct(A, n, B, m);
    return 0;
}