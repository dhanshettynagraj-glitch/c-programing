#include <stdio.h>
#include <stdlib.h>

int main() {
    // Allocate dynamic memory for an integer
    int *ptr = (int *)malloc(sizeof(int));
    
    // Check if allocation was successful
    if (ptr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }
    
    // Use the allocated memory
    *ptr = 100;
    printf("Allocated value: %d\n", *ptr);
    
    // Free the dynamic memory
    free(ptr);
    printf("Memory freed successfully.\n");
    
    return 0;
}