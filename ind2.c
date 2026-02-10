#include <stdio.h>
#include <stdlib.h>

#define MAX 10001  

int main() {
    int n, m;
    printf("Enter size of array A: ");
    scanf("%d", &n);
    printf("Enter size of array B: ");
    scanf("%d", &m);
    
    int *A = (int *)malloc(n * sizeof(int));
    int *B = (int *)malloc(m * sizeof(int));
    
    printf("Enter elements of array A: ");
    for(int i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }
    
    printf("Enter elements of array B: ");
    for(int i = 0; i < m; i++) {
        scanf("%d", &B[i]);
    }
    

    int *freqB = (int *)calloc(MAX, sizeof(int));
    for(int i = 0; i < m; i++) {
        if(B[i] >= 0 && B[i] < MAX) {
            freqB[B[i]]++;
        }
    }
    
    int isSubset = 1;
    for(int i = 0; i < n; i++) {
        if(A[i] < 0 || A[i] >= MAX || freqB[A[i]] == 0) {
            isSubset = 0;
            break;
        }
        freqB[A[i]]--;  
    }
    
    if(isSubset) {
        printf("Array A is a subset of array B.\n");
    } else {
        printf("Array A is not a subset of array B.\n");
    }
    
    free(A);
    free(B);
    free(freqB);
    
    return 0;
}