#include <stdio.h>

void bubbleSortAscending(int arr[], int n) {
    int i, j, temp;
    for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

void bubbleSortDescending(int arr[], int n) {
    int i, j, temp;
    for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-i-1; j++) {
            if (arr[j] < arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int binarySearch(int arr[], int l, int r, int x) {
    while (l <= r) {
        int m = l + (r - l) / 2;
        if (arr[m] == x)
            return m;
        if (arr[m] < x)
            l = m + 1;
        else
            r = m - 1;
    }
    return -1;
}

int main() {
    int n, target;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Original array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Sort ascending
    bubbleSortAscending(arr, n);
    printf("Sorted array (ascending): ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Sort descending
    bubbleSortDescending(arr, n);
    printf("Sorted array (descending): ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Re-sort ascending for binary search
    bubbleSortAscending(arr, n);

    printf("Enter the target element for binary search: ");
    scanf("%d", &target);

    int result = binarySearch(arr, 0, n-1, target);
    if (result != -1) {
        printf("Element %d found at index %d\n", target, result);
        printf("Array with pointer: ");
        for (int i = 0; i < n; i++) {
            if (i == result) {
                printf("[%d] ", arr[i]);
            } else {
                printf("%d ", arr[i]);
            }
        }
        printf("\n");
    } else {
        printf("Element %d not found\n", target);
    }

    return 0;
}
