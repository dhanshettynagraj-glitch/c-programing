#include <stdio.h>
#include <limits.h>  


int main() {
    int arr[] = {12, 35, 1, 10, 34, 1}; 
    int n = sizeof(arr) / sizeof(arr[0]);
    
    if (n < 2) {
        printf("Array must have at least 2 elements.\n");
        return 1;
    }
    
   
    int largest = INT_MIN;
    int second_largest = INT_MIN;
    
   
    int smallest = INT_MAX;
    int second_smallest = INT_MAX;
    
   
    for (int i = 0; i < n; i++) {

        if (arr[i] > largest) {
            second_largest = largest;
            largest = arr[i];
        } else if (arr[i] > second_largest) {
            second_largest = arr[i];
        }
        
        if (arr[i] < smallest) {
            second_smallest = smallest;
            smallest = arr[i];
        } else if (arr[i] < second_smallest) {
            second_smallest = arr[i];
        }
    }


    if (second_largest == INT_MIN) {
        second_largest = largest;
    }
    if (second_smallest == INT_MAX) {
        second_smallest = smallest;
    }
    
    printf("2nd Largest: %d\n", second_largest);
    printf("2nd Smallest: %d\n", second_smallest);
    
    return 0;
}